#pragma once

struct Vector2
{
	Vector2() = default;
	explicit Vector2(float x); // Initialize both components to x.
	Vector2(float x, float y);

	//Vector2 operator-() const;

	Vector2 operator+(const Vector2& rhs) const; // one way
	Vector2 operator-(const Vector2& rhs) const;

	Vector2 operator*(float rhs) const;

	float x = 0.0f;
	float y = 0.0f;
};

//Vector2 operator+(const Vector2& lhs, const Vector2 rhs);
Vector2 operator*(float lhs, const Vector2& rhs);