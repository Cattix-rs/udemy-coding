#include <iostream>
#include <cassert>
#include <Vector.hpp>

int main()
{
	vec2f a{ 1, 2 };
	vec2f b{ 3, 4 };

	vec2f c = a + b;
	assert(c[0] == 4.0f && c[1] == 6.0f);

	return 0;
}