#include <iostream>

int main()
{
	bool t = true;
	bool f = false;

	bool is_true = true;
	bool is_false = !is_true;

	bool _and = is_true && is_false; // this is always falls

	bool _or = is_true || is_false;//will always be true

	std::cout << "size of bool: " << sizeof(bool) << std::endl;




}