#include <iostream>

int main()
{
	// if condition
	if (true)
	{
		std::cout << "This is true." << std::endl;
	}

	std::cout << "The code will conutinue here... " << std::endl;

	if (false)
	{
		std::cout << "The conditon is true" << std::endl;
	}
	else
	{
		std::cout << "The conditin is false" << std::endl;
	}
	
		int i = 6;

		if (i < 5)
		{
			std::cout << "The number is less than 5." << std::endl;
		}
		else if (i < 8)
		{
			std::cout << "The number is less than 8." << std::endl;
		}
		else if (i >= 10)
		{
			std::cout << "The number is greater than or equal to 10." << std::endl;
		}
		else
		{
			std::cout << "The number is between 5 and 7." << std::endl;
		}

		switch (i)
		{
		case 0:
			std::cout << "you fail!" << std::endl;
			break;
		case 1:
			std::cout << "sadly you got a 1." << std::endl;
			break;
		case 2:
			std::cout << "sadly you got a 2." << std::endl;
		case 3:
			std::cout << "sadly you got a 3." << std::endl;
			break;
		case 4:
			std::cout << "you almost pass you got a 4." << std::endl;
			break;
		case 5:
			std::cout << "you sadly didnt pass you got a 5." << std::endl;
			break;
		case 6:
			std::cout << "you passed becauese you got a 6." << std::endl;
			break;
		case 7:
			std::cout << "good job you got a 7." << std::endl;
			break;
		case 8:
			std::cout << "good job you got a 8." << std::endl;
			break;
		case 9:
			std::cout << "good job you got a 9." << std::endl;
			break;
		case 10:
			std::cout << "you got every question correct 10." << std::endl;
			break;
		default:
			std::cout << "your grade is " << i << "." << std::endl;
			break;
		}
	
	// while loops
		i = 0;
		while (i < 10)
		{
			std::cout << "i: " << i << std::endl;
			++i;
		}
		// do-while loop
		i = 0;
		do
		{
			std::cout << "i:" << i << std::endl;
			++i; // pre increment
		} while (i < 10);

		// for loops.
		for (int j = 0; j < 10; ++j)
		{
			std::cout << "j: " << j << std::endl;
			if (j >= 5)
			{
				break;
			}
		}

		//j only isnide forloop

		//range based for loop

		int arr[] = { 1, 2, 3, 4, 5 };
		for ( int i = 0; int v : arr)
		{
			std::cout << "v[" << i << "]:" << v << std::endl;
		++i;
		}



	return 0;
}