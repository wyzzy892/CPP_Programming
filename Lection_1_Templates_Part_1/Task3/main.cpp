#include <iostream>
#include "solve_eq.hpp"

int main()
{
	setlocale(LC_ALL, "rus");
	//Test 1
	std::cout << "Test 1\n";
	double a = 2.0;
	double b = 3.4;
	double c = 1.8;
	solve(a, b, c);

	//Test 2
	std::cout << "Test 2\n";
	a = 0, b = 0, c = 0;
	solve(a, b, c);

	//Test 3
	std::cout << "Test 3\n";
	a = 0, b = 0, c = 1;
	solve(a, b, c);

	//Test 4
	std::cout << "Test 4\n";
	a = 0, b = 3.5, c = 0;
	solve(a, b, c);

	//Test 5
	std::cout << "Test 5\n";
	a = 0, b = 5, c = 1;
	solve(a, b, c);

	//Test 6
	std::cout << "Test 6\n";
	a = 11.2, b = 0, c = 0;
	solve(a, b, c);

	//Test 7
	std::cout << "Test 7\n";
	a = 11.2, b = 0, c = 30;
	solve(a, b, c);

	//Test 8
	std::cout << "Test 8\n";
	a = 11.2, b = 7.9, c = 0;
	solve(a, b, c);

	return 0;
}