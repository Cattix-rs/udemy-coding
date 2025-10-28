#include <iostream>
#include <limits>
#include <string>//used older project but dont think this line was nessasary.

double readnumber()
{
	double n;
	std::cout << "Please enter your number." << std::endl;
	std::cin >> n;

	while (std::cin.fail())
	{
		std::cout << "ERROR: I expected a number." << std::endl;
		std::cout << "try again" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> n;
	}
	//std::cout << "the number you enterd was " << n;
	return n;
}
char readoperations() //am aware this is a near coppy 
{ 
	std::cout << "enter your calculaton symbol ( + , - , / , * ) " << std::endl;
	char op;
	std::cin >> op;

	while (op != '+' && op != '-' && op != '*' && op != '/')
	{
		std::cout << "ERROR: expected an oparator (+, -, *, /)! " << std::endl;
		std::cin.clear();
		std::cout << "enter your calculaton symbol ( + , - , / , * ) " << std::endl;
		std::cin >> op;
	}
	return op;
}
	/*enum
	{
		addition,
		subtraction,
		multiplication,
		divison

	};

	std::cout << "now enter the respective nubmer of your chosesn calculatoi type addition 0 subtraction 1 multiplication 2 divison 3 " << std::endl;
	std::cin >> enum nubmber*/

	/*	double sn;
	std::cout << "enter your second number after that caculation will begin" << std::endl;
	double a;
	while (std::cin.fail())
	{
		std::cout << "ERROR: I expected a number." << std::endl;
		std::cout << "try again" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> sn;
	}*/
double evaluate(double lhs, char op, double rhs)
{
	switch (op)
	{
	case '+':
		return lhs + rhs;
	case '-':
		return lhs - rhs;
	case '*':
		return lhs * rhs;
	case '/':
		return lhs / rhs;
	}
	return 0;
}
	/*if enum(0)
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
	return 0;*/
int main()
{
	double lhs = readnumber();
	char op = readoperations();
	double rhs = readnumber();

	while (op == '/' && rhs == 0.0)
	{
		std::cout << "ERROR: Cannot divide by 0!" << std::endl;
		rhs = readnumber();
	}

	double result = evaluate(lhs, op, rhs);

	std::cout << lhs << " " << op << " " << rhs << " = " << result << std::endl;
}
