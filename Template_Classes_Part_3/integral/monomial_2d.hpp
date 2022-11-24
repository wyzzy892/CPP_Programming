#ifndef MONOMIAL_2D_HPP
#define MONOMIAL_2D_HPP
#include "factorial.hpp"

template<unsigned alpha, unsigned beta>
struct monomial_2d {
	static const unsigned value = factorial<alpha + beta + 2>::value / \
		(factorial<alpha>::value * factorial<beta>::value);
};

#endif // !MONOMIAL_2D_HPP
