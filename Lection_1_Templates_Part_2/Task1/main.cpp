#include <iostream>
#include "matrix.hpp"
#include "module.hpp"
#include "complex.hpp"

int main()
{
	int a = -10;
	double b = -23.43;

	std::cout << "a = " << a << ", |a| = " << my_module(a) << "\n";
	std::cout << "b = " << b << ", |b| = " << my_module(b) << "\n\n";

	Complex c(2.0, -3.3);
	Complex d(-5.6, 7.9);

	std::cout << "c = " << c << ", |c| = " << my_module(c) << "\n";
	std::cout << "d = " << d << ", |d| = " << my_module(d) << "\n\n";

	int** arr = new int* [2];
	for (size_t i = 0; i < 2; i++) {
		arr[i] = new int[2];
		for (size_t j = 0; j < 2; j++)
			arr[i][j] = rand() % 10;
	}

	Matrix M(arr);
	std::cout << "M =\n" << M << "|M| = " << my_module(c) << "\n";

	return 0;
}