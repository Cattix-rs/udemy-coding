#include <iostream>

int main()
{
	unsigned char c = 'A';
	std::cout << "Size of c; " << sizeof c << std::endl;
	int i = c;//withending conversion

	c = static_cast<unsigned char>( i );//narow converison

	unsigned int ui = 3;
	i = static_cast<int>( ui ); //narowing conversion

	ui = static_cast<unsigned int>( i ); // result int unitential behaviour

	float f = 3.14f;
	double d = f;
	f = static_cast<float>(d);

	f = static_cast<float>(i);
	d = i;

	i = static_cast<int>( f );

	f = static_cast<float>(i);
	i = static_cast<int>(f);

	const float cf = 3.14f;
	float* pf = const_cast<float*>(&cf);
	*pf = 6.28f;// be carefull with this might cause errors it changes a const.
	return 0;
}