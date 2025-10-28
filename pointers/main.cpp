#include <iostream>

int main()
{
	int i = 3;
	const char* name = "Ruben ";

	int* pi = nullptr;//&i;
	pi = &i;

	if (pi != nullptr)
	{
		*pi = 3;
	}

	std::cout << "address of i: " << pi << std::endl;
	std::cout << "value of i: " << *pi << std::endl;

	*pi = 4;

	std::cout << "value of i: " << *pi << std::endl;

	if (*pi == i)
	{
		std::cout << "the values are both " << i << std::endl;
	}

	std::cout << "the first letter of " << name << "is " << name[0] << std::endl;

	const char* constlastname = "Stolwijk ";

	const unsigned char values[] = { 1, 2, 3, 4 };

	std::cout << *(values + 1) << std::endl;

	int* arr = new int[100];

	*(arr + 0) = 0;
	arr[0] = 0;
	arr[99] = 99;
	*(arr + 99) = 99;
		
	delete[] arr;

	int& ri = i;

	ri = i;// this will only set value of i.

	ri = 5;
	std::cout << "value of i: " << i << std::endl;

	return 0;
}