#ifndef MODULE_HPP
#define MODULE_HPP
#include "matrix.hpp"
#include "comp.hpp"
#include <cmath>

template<typename T>
double my_module(T const& value) {
	return abs(value);
}

template<>
double my_module(Comp const&value) {
	return sqrt(value[0] * value[0] + value[1] * value[1]);
}

template<>
double my_module(Matrix const& m) {
	double r1 = m.get(0, 0) * m.get(1, 1) * m.get(2, 2) + m.get(0, 1) * m.get(1, 2) * m.get(2, 0) + m.get(0, 2) * m.get(1, 0) * m.get(2, 1);
	double r2 = m.get(0, 2) * m.get(1, 1) * m.get(2, 0) + m.get(0, 1) * m.get(1, 0) * m.get(2, 2) + m.get(0, 0) * m.get(1, 2) * m.get(2, 1);
	return r1 - r2;
}

#endif // !MODULE_HPP

