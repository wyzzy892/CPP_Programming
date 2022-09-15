#ifndef MY_MATH_HPP
#define MY_MATH_HPP
#include <cassert>

template<typename T>
T _abs(T a) {
	return a >= 0 ? a : -a;
}

template<typename T>
double _sqrt(T x)
{
	assert(x >= 0);
	if (x == 0 || x == 1) return x;

	double x_r = x;
	double x_l = 0;
	double result = x / 2;

	while (_abs((result * result - x) / result) > 0.00001)
	{
		if (result * result > x) {
			x_r = result;
		}

		else {
			x_l = result;
		}

		result = (x_r + x_l) / 2;
	}
	return result;
}


#endif
