#include <cassert>
#include <iostream>

#include <Vector2.hpp>

int main()
{
	Vector2 a{ 1, 2 };
	Vector2 b{ 3, 4 };

	Vector2 c = a + b;
	assert(c.x == 4.0f && c.y == 6.0f);

	Vector2 d = a;// this should be d = -a following line 1.0f and 2.0f should be -1.0f and -2.0f
	assert(d.x == 1.0f && d.y == 2.0f);

	return 0;
}