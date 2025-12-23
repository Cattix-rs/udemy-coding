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

private:
	int hitPoints = 0;

};

Entity::Entity(int hitPoints)
	: hitPoints(hitPoints)
{
	std::cout << "Entity::Entity(" << this->hitPoints << ")" << std::endl;
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

	/*printHitPoints(entity);

	printHitPoints(Entity{ 10 });*/

	Entity entity2 = Entity{ 100 }; // this is valid because we have a paramtatized constructor

	return 0;
}