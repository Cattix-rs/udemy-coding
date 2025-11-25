#pragma once

#include <iostream>
#include <memory>

class windowImpl;
class window
{
public:
	window();
	~window();

	void showwindow();

private:
	//the pimpl idiom (pointer to implementation).
	std::unique_ptr<windowImpl> pImpl;

};