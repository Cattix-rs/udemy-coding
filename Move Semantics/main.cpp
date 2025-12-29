#include <iostream>
#include <cassert>

#include <Array.hpp>

int main()
{
	Array<float> a{ 100 };
	Array<float> b{ 50 };

	Array<float> c = a; // copy constructor.
	assert(c.getSize() == a.getSize());

	// move constructor.
	Array<float> d = std::move(b);
	assert(d.getSize() == 50);
	assert(b.getSize() == 0);


	return 0;
}
