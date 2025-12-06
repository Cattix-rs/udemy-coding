#include <iostream>


decltype(auto) max(const auto& a, const auto& b)
{
	return a > b ? a : b;
}


void swap(auto& a, auto& b)
{
	auto tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	{
		int a = 5;
		int b = 10;
		int c = max(a, b);
	}

	{
		int a = 5;
		double b = 10.0;

		auto c = max(a, b);
		
	}

	{
		int a = 5;
		int b = 10;
		std::cout << "value a:" << a << std::endl;
		std::cout << "value b:" << b << std::endl;
		swap(a, b);
		std::cout << "value swaped a:" << a << std::endl;
		std::cout << "value swaped b:" << b << std::endl;
	}

	return 0;

}