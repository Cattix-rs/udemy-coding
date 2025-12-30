#pragma once

class Int
{
public:
	explicit Int(int i);
	~Int() = default;

	explicit operator int() const; // conversion operator

private:
	int i = 0;
};