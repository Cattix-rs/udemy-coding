#include <iostream>

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

float add(float a, double b)
{
	return a + b;
}

int pass_by_value(int a)
{
	a += 5;
	return a;
}



int pass_by_refrence(int& a)
{
	a += 5;
	return a;
}

int pass_by_const_refrence(const int& a)
{
//	a += 5;
		return a;
}

int pass_by_pointer(int* p)// can also be a const pointer. argument (const int* p = nullptr)
{
	if (p) 
		*p += 5;

	return *p;
}

double pow(double base, int exponent = 1)
{
	double result{ 1.0 };
	if (exponent > 0)
	{
		while (exponent-- > 0)
			result *= base;
	}
	else
	{
		while (exponent++ < 0)
			result /= base;
	}
	return result;
}

using add_func = int(*)(int, int);

int main()
{
	int one = add(0, 1);
	int two = add(1, 1);
	double d1 = add(0.0, 1.0);//double version
	float f1 = add(0.0f, 1.0f);//float version


	int v = pow(10);

	int a = 0;
	a = pass_by_refrence(a);
	std::cout << "a: " << a << std::endl;

	pass_by_const_refrence(10);// literals are allowed when passed by const-refrence

	int b = 0;
	pass_by_pointer(&b);
	std::cout << "b: " << b << std::endl;

	/*int(*add_func)(int, int);
	add_func = &add;

	int j = add_func(5, 6)*/;

	add_func f = &add;
	int j = f(4, 5);

	return 0;
}