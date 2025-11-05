#include <iostream>

int main()
{
	int values[5]{ 1,2,3,4,5 };

	for (int i = 0; i < std::size(values); i++)
	{
		std::cout << "values[" << i << "]: " << values[i] << std::endl;
	}
	
	int* pvalues = new int[10];
	memset(pvalues, 0, sizeof(int) * 10);
	for (int i = 0; i < 10; ++i)
	{
		pvalues[i] = 0;
		std::cout << "pvalues[" << i << "]: " << pvalues[i] << std::endl;
	}







	return 0;
}