#ifndef SOLVE_EQ_HPP
#define SOLVE_EQ_HPP
#include "my_math.hpp"
#include <iostream>

template<typename T>
void solve(T a, T b, T c) {
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				std::cout << "Уравнение имеет бесконечное множество решений\n";
				return;
			}
			else {
				std::cout << "Корней нет\n";
				return;
			}
		}
		else {
			std::cout << "x1 = x2 = " << (-c / b)<<"\n";
			return;
		}
	}
	else {
		double D = 1.0 * b * b - 4.0 * a * c;
		if (D > 0) {
			double x1 = (-1.0*b - _sqrt(D)) / (2.0 * a);
			double x2 = (-1.0*b + _sqrt(D)) / (2.0 * a);
			std::cout << "x1 = " << x1<<"\nx2 = " << x2<<"\n";
			return;
		}
		else if (D == 0) {
			std::cout << "x1 = x2 = " << (-1.0 * b) / (2.0 * a)<<"\n";
			return;
		}
		else {
			double iD = _sqrt(-D);
			std::cout << "x1 = " << -0.5 * b / a << "-" << 0.5 * iD / a << "i\n";
			std::cout << "x2 = " << -0.5 * b / a << "+" << 0.5 * iD / a << "i\n";
			return;
		}
	}
}

#endif
