#pragma once

template<typename T, size_t N>
struct Vector
{
	Vector<T, N> operator+(const Vector<T, N>& rhs) const;

	T data[N];
};

template <typename T, size_t N>
Vector<T, N> Vector<T, N>::operator+(const Vector<T, N>& rhs) const
{
	Vector<T, N> res;

	for (size_t i = 0; i < N; i++)
	{
		res.data[i] = data[i] + rhs.data[i];
	}
	return res;
}

using vec2f = Vector<float, 2>;
using vec3f = Vector<float, 3>;
