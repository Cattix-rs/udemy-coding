#include <iostream>

int main()
{
	double d = 42.99;
	float f = 5;
	f = static_cast<double>(d);

	int i;
	i = static_cast<float>(f);
	char c;
	c = static_cast<int>(i);
	bool b;
	b = static_cast<char>(c);
	std::cout << "Size of d; " << sizeof d << std::endl;
	std::cout << "Size of c; " << sizeof c << std::endl;
	std::cout << "Size of i; " << sizeof i << std::endl;
	std::cout << "Size of b; " << sizeof b << std::endl;



	return 0;

}