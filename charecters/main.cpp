#include <iostream>

int main()
{

	char c = 'A';
	char name[] = "ruben";

	signed char sc = 'A';
	unsigned char uc = 'A';

	wchar_t wc = L'A';

	std::cout << "Sizeof wchar_t: " << sizeof(wchar_t) << std::endl;

	char16_t c16 = u'A';//utf 16
	char32_t c32 = U'A';//utf 32

	char8_t c8 = u8'A';//utf -8 c 20



	return 0;


}