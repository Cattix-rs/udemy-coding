#include <cassert>
#include <iostream>

#include <Vector2.hpp>

int main()
{
	Vector2 a{ 1, 2 };
	Vector2 b{ 3, 4 };

	Vector2 c = a + b;
	assert(c.x == 4.0f && c.y == 6.0f);

	Vector2 d = -a;
	assert(d.x == -1.0f && d.y == -2.0f);

	c += a;
	assert(c.x == 5.0f && c.y == 8.0f);

	Vector2 e = c--;
	assert(e.x == 5.0f && e.y == 8.0f);
	assert(c.x == 4.0f && c.y == 7.0f);

	return 0;
}