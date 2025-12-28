#pragma once
#include <cassert>

template<typename T, size_t N>
struct Vector
{
	Vector<T, N> operator+(const Vector<T, N>& rhs) const;

	//T& operator[](size_t i);
	//const T& operator[](size_t i) const;

	template<typename Self>
	auto&& operator[](this Self&& self, size_t i);


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


template <typename T, size_t N>
template <typename Self>
auto&& Vector<T, N>::operator[](this Self&& self, size_t i)
{
	assert(i < N);
	return self.data[i];
}




//template <typename T, size_t N>
//T& Vector<T, N>::operator[](size_t i)
//{
//	assert(i < N);
//	return data[i];
//}
//template <typename T, size_t N>
//const T& Vector<T, N>::operator[](size_t i) const
//{
//	assert(i < N);
//	return data[i];
//}
