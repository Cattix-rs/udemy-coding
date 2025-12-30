#include <Int.hpp>

Int::Int(int i)
	: i{i}
{}

Int::operator int() const
{
	return i;
}
