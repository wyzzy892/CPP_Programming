#include <iostream>
#include "monomial_2d.hpp"

const unsigned integral = monomial_2d<3, 5>::value;

int main(void)
{
	std::cout << "Integral  =  " << 1. / integral << '\n';
	return 0;
}