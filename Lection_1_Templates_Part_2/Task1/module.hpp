#ifndef MODULE_HPP
#define MODULE_HPP
#include "matrix.hpp"
#include "complex.hpp"
#include <cmath>

//abs
template<typename T>
double my_module(T const& value) {
	return abs(value);
}

//|x+iy|
template<>
double my_module(Complex const&value) {
	return sqrt(value[0] * value[0] + value[1] * value[1]);
}

//det(M)
template<>
double my_module(Matrix const& m) {
	return m.get(0,0)*m.get(1,1)-m.get(0,1)*m.get(1,0);
}

#endif // !MODULE_HPP

