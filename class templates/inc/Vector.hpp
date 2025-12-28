#pragma once
#include <cassert>
#include "VectorBase.hpp"

template<typename T, size_t N>
struct Vector : VectorBase<T, N>
{

	using base = VectorBase<T, N>;

	Vector<T, N> operator+(const Vector<T, N>& rhs) const;

	//T& operator[](size_t i);
	//const T& operator[](size_t i) const;

	//template<typename Self>
	//auto&& operator[](this Self&& self, size_t i);


	
};


inline Vector<float, 2> Vector<float, 2>::operator+(const Vector<float, 2>& rhs) const
{
	Vector<float, 2> res;

	res.data[0] = data[0] + rhs.data[0];
	res.data[1] = data[1] + rhs.data[1];

	return res;
}


template <typename T, size_t N>
Vector<T, N> Vector<T, N>::operator+(const Vector<T, N>& rhs) const
{
	Vector<T, N> res;

	for (size_t i = 0; i < N; i++)
	{
		res.data[i] = base::data[i] + rhs.data[i];
	}
	return res;
}

//template <typename T, size_t N>
//template <typename Self>
//auto&& Vector<T, N>::operator[](this Self&& self, size_t i)
//{
//	assert(i < N);
//	return self.data[i];
//}

//template <typename Self>
//auto&& Vector <float, 2>::operator[](Self&& self, size_t i)
//{
//	assert(i < 2);
//	return self.data[i];
//}

using vec2f = Vector<float, 2>;
using vec3f = Vector<float, 3>;


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
