#include <iostream>
#include "fibonacci.hpp"

const unsigned f0 = fibonacci<0>::value;
const unsigned f1 = fibonacci<1>::value;
const unsigned f2 = fibonacci<2>::value;
const unsigned f3 = fibonacci<3>::value;
const unsigned f4 = fibonacci<4>::value;
const unsigned f5 = fibonacci<5>::value;
const unsigned f6 = fibonacci<6>::value;
const unsigned f7 = fibonacci<7>::value;
const unsigned f8 = fibonacci<8>::value;
const unsigned f9 = fibonacci<9>::value;
const unsigned f10 = fibonacci<10>::value;

int main(void)
{
	std::cout << "First 10 numbers of Fibonacci sequence:\n";
	std::cout << f0 << '\n';
	std::cout << f1 << '\n';
	std::cout << f2 << '\n';
	std::cout << f3 << '\n';
	std::cout << f4 << '\n';
	std::cout << f5 << '\n';
	std::cout << f6 << '\n';
	std::cout << f7 << '\n';
	std::cout << f8 << '\n';
	std::cout << f9 << '\n';
	std::cout << f10 << '\n';

	return 0;
}