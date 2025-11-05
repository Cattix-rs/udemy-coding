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
	std::cout << "the number you enterd was " <<  n << std::endl;
	enum 
	{
		addition,
		subtraction,
		multiplication,
		divison

	};
	int nubmber;
	std::cout << "now enter the respective nubmer of your chosen calculaton type addition ( 0 ) subtraction ( 1 ) multiplication ( 2 ) divison ( 3 ) " << std::endl;
	std::cin >> nubmber;
	double sn;
	std::cout << "enter your second number after that caculation will begin" << std::endl;
	std::cin >> sn;
	
	double a;
	while (std::cin.fail())
	{
		std::cout << "ERROR: I expected a number." << std::endl;
		std::cout << "try again" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> sn;
	}
	if (nubmber == addition)
	{
		a = n + sn;
			std::cout << "The anwnser is  "  << a << std::endl;
	}
	else if (nubmber == subtraction)
	{
		a = n - sn;
		std::cout << "The anwnser is  " << a << std::endl;
	}
	else if (nubmber == multiplication)
	{
		a = n * sn;
		std::cout << "The anwnser is  " << a << std::endl;
	}
	else if (nubmber == divison)
	{
		while ( sn == 0.0)
		{
			std::cout << "ERROR: Cannot divide by 0!" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> sn;
		}
		a = n / sn;
		std::cout << "The anwnser is  " << a << std::endl;
	}
	return 0;
}