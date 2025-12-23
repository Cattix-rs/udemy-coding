#include <iostream>

class Entity
{
public:
	Entity(int hitpoint = 100); // parameterized constructor.

private:
	int hitpoints = 0;

};

Entity::Entity(int hitpoints)
	: hitpoints(hitpoints)
{
	std::cout << "Entity::Entity(" << this->hitpoints << ")" << std::endl;
}

int main()
{
	Entity entity{ 50 };


	return 0;
}