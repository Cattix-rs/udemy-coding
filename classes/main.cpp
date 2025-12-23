#include <iostream>

class Entity
{
public:
	explicit Entity(int hitPoint = 100); // parameterized constructor.
	~Entity();

	int getHitpoints() const
	{
		return hitPoints;
	}

	Entity(const Entity& e); // copy constructor

private:
	int hitPoints = 0;

};

Entity::Entity(int hitPoints)
	: hitPoints(hitPoints)
{
	std::cout << "Entity::Entity(" << this->hitPoints << ")" << std::endl;
}

Entity::Entity(const Entity& e)
	: hitPoints(e.hitPoints)
{
	std::cout << "Entity::Entity(const Entity& e)" << std::endl;
 }

Entity::~Entity()
{
	std::cout << "Entity::~Entity()" << hitPoints << std::endl;
}

void printHitPoints(const Entity& e)
{
	std::cout << "hitPoints: " << e.getHitpoints() << std::endl;
}

int main()
{
	Entity entity{ 50 };
	Entity entity2{ entity }; //copy of entity.
	

	

	return 0;
}