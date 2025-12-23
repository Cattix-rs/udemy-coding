#include <iostream>
#include <player.hpp>


void printHitPoints(const Entity& e)
{
	std::cout << "hitPoints: " << e.getHitPoints() << std::endl;
}


int main()
{
	Player player{ };
	
	Entity* e = &player;
	e->update(0.1f);
	e->draw();

	return 0;
}