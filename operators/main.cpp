#include <iostream>
# include <compare>
int main()
{
	{
		int a = 5;
		int b = 4;

		int c = a + b;
		c = a - b;
		c = a * b;
		c = a / b; // is 1
	}

	{
		int a = 5;
		int b = -a;
		b = +a;

		uint8_t c = 5;
		auto d = +c;

		auto e = c + 1;

	}

	{
		for (int i = 0; i < 20; i++)
		{
			std::cout << i << " % 10: " << (i % 10) << std::endl;
		}
	}

	/* {   // other wise it creaters some isue works when cometed
		int a = 5;
		// int b = --a;
		int c = a--;
	}
	{
		bool a = true;
		bool b = false;

		bool c = a || b;
		bool c = b && a;
		bool e = !a;
	} */

	// c++20 three-way comparison operator (spacechip operator
	{
		int a = 6;
		int b = 6;

		auto c = a <=> b;

		if (c < 0)
		{
			std::cout << "a is less than b" << std::endl;
		}
		if (c > 0)
		{
			std::cout << "a is greater than b" << std::endl;
		}
		if (c == 0)
		{
			std::cout << "a is equal to b" << std::endl;
		}
	}

	{/*
		int a = 5;
		int b = 5;

		if (a < b)
		{
			std::cout << "a is less than b " << std::endl;

		}
		if (a > b)
		{
			std::cout << " a is greater than b" << std::endl;
		}
		if (a == b)
		{
			std::cout << " a is equal to b" << std::endl;
		}*/
	}
	return 0;
}