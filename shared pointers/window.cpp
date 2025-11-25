#include <memory>
#include "window.hpp"
#include <iostream>

class windowImpl
{
public:
	windowImpl() = default;
	virtual ~windowImpl() = default; // minimum required for abstract base class.

	virtual void showwindow() = 0;
};

#if _WIN32
class windowWin32 : public windowImpl
{
public:
	void showwindow() override
	{
		std::cout << "Windowwin32::showWindow()" << std::endl;
	}
};
using WindowType = windowWin32;
#else
class windowLinux : public windowImpl
{
public:
	void showwindow() override
	{
		std::cout << "WindowLinux::showWindow()" << std::endl;
	}
};
using WindowType = windowLinux;
#endif

window::window()
{
	pImpl = std::make_unique<WindowType>();
}

window::~window() = default;




void window::showwindow()
{
	pImpl->showwindow();
}