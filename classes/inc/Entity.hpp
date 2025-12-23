#pragma once

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
	virtual void update(float deltaTime) = 0; // pue virtual

private:
	int hitPoints = 0;

};
