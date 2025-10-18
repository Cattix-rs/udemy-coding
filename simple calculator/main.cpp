#include <iostream>
#include <limits>
#include <string>//used older project but dont think this line was nessasary.

int main()
{
	double n;
	std::cout << "Welcome to ruben's first calculator." << std::endl;
	std::cout << "Please enter your first number." << std::endl;
	std::cin >> n;

	while (std::cin.fail())
	{
		std::cout << "ERROR: I expected a number." << std::endl;
		std::cout << "try again" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> n;
	}
	std::cout << "the number you enterd was " <<  n;
	enum
	{
		addition,
		subtraction,
		multiplication,
		divison

	};

	std::cout << "now enter the respective nubmer of your chosesn calculatoi type addition 0 subtraction 1 multiplication 2 divison 3 " << std::endl;
	std::cin >> enum nubmber
	double sn;
	std::cout << "enter your second number after that caculation will begin" << std::endl;
	double a;
	while (std::cin.fail())
	{
		std::cout << "ERROR: I expected a number." << std::endl;
		std::cout << "try again" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> sn;
	}
	if enum(0)
	{
		a = n + sn
			std::cout << "The anwnser is a " std::endl;
	}
	else if enum(1)
	{
		a = n - sn
			std::cout << "The anwnser is a " std::endl;
	}
	else if enum(2)
	{
		a = n * sn
			std::cout << "The anwnser is a " std::endl;
	}
	else if enum(3)
	{
		if (sn = 0)
		{
			std::cout << "cant devide by 0"
				return 1;
		}
		a = n / sn
			std::cout << "The anwnser is a " std::endl;
	}
	return 0;
}