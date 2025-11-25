#include <iostream>
#include <memory>
#include "window.hpp"


class Widget
{
public:
	Widget(int data = 0)
		: data{data}
	{
		std::cout << "Wiget::Widget( " << data << " )" << std::endl;
	}

	~Widget()
	{
		std::cout << "~Widget::Widget()" << std::endl;
	}

	void doSomething()
	{
		std::cout << "Widget::doSomething()" << std::endl;
	}
private:
	int data = 0;
};


struct WidgetDeleter
{
	void operator()(Widget* w)
	{
		std::cout << "WidgetDeleter::opperator()" << std::endl;
		delete w;
	}
};

template<typename T>
struct CustomAllocator
{
	using value_type = T;

	CustomAllocator() noexcept = default;

	template<typename U>
	CustomAllocator(const CustomAllocator<U>&) noexcept {}

	T* allocate(std::size_t n)
	{
		std::cout << "CustomAllocator::allocator( " << n << " )" << std::endl;
		return static_cast<T*>(::operator new(n * sizeof(T)));
	}

	void deallocate(T* p, std::size_t n) noexcept
	{
		std::cout << "CustomAllocator::deallocator( " << n << " )" << std::endl;
		::operator delete(p);
	}
};

template<typename T, typename U>
bool operator==(const CustomAllocator<T>& lhs, const CustomAllocator<U>& rhs) noexcept { return true; }
template<typename T, typename U>
bool operator!=(const CustomAllocator<T>& lhs, const CustomAllocator<U>& rhs) noexcept { return !(lhs == rhs); }

std::shared_ptr<Widget> make_widget(int data = 0)
{
	return std::allocate_shared<Widget>(CustomAllocator<Widget>(), data);
}




int main()
{
	std::weak_ptr<Widget> wptr;
	std::shared_ptr<Widget> sptr;
	{
		auto widget = make_widget(1);
		//auto widget = std::make_shared<Widget>(1);
		sptr = widget;

		std::cout << "Use count: " << widget.use_count() << std::endl;

		wptr = widget;//weak pointers wont increment use count

		std::cout << "Use count: " << widget.use_count() << std::endl;
	}
	/*std::cout << "Use count: " << widget.use_count() << std::endl;

	{
		auto widget2 = widget;
		std::cout << "Use count: " << widget.use_count() << std::endl;
	}

	std::cout << "Use count: " << widget.use_count() << std::endl;*/

	if (auto widget = wptr.lock())
	{
		//then we can use it...
		widget->doSomething();
	}

	////std::unique_ptr<Widget> uptr = std::unique_ptr<Widget>(new Widget(2));
	//{
	//	// RAII
	//	std::unique_ptr<Widget> widget = std::make_unique<Widget>(2);
	//}



	//auto uptr = std::make_unique<Widget>(2);

	window win;

	win.showwindow();

	return 0;

}