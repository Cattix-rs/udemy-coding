#include <iostream>

class Entity
{
public:
	explicit Entity(int hitPoint = 100); // parameterized constructor.
	~Entity();

	int getHitPoints() const
	{
		return hitPoints;
	}

	Entity(const Entity& e); // copy constructor

	 virtual void draw() const; //immutable

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

void Entity::draw() const
{
	std::cout << "Entity::draw()" << std::endl;
}

class Player : public Entity
{
public:
	explicit Player(int hitPoints = 100);
	~Player();

	void draw() const override;
};

Player::Player(int hitPoints)
	: Entity(hitPoints)
{
	std::cout << "Player::Player( " << hitPoints << ")" << std::endl;
}

Player::~Player()
{
	std::cout << "Player::~Player()" << std::endl;
}

void Player::draw() const
{
	std::cout << "Player::draw()" << std::endl;
}

void printHitPoints(const Entity& e)
{
	std::cout << "hitPoints: " << e.getHitPoints() << std::endl;
}

int main()
{
	Player player{ };
	
	player.draw(); // draw the player to the screen.
	
	Entity* e = &player;
	e->draw();

	return 0;
}