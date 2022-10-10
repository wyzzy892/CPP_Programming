#ifndef TEMPLES_HPP
#define TEMPLES_HPP
#include "complex.hpp"
#include "matrix.hpp"
#include <cstring>
#include <string>

//Real values
template<typename T>
T add(T a, T b) {
	std::cout << "add function for real values is called\n";
	return a+b;
}

//Complex numbers
template<>
Complex add(Complex a, Complex b) {
	std::cout << "add function for complex numbers is called\n";
	return a+b;
}

//Matrices
template<>
Matrix add(Matrix a, Matrix b) {
	std::cout << "add function for matrices is called\n";
	return a + b;
}

//C-style strings
char* add(char const* a, char const* b) {
	std::cout << "add function for C-style strings is called\n";
	char* tmp = new char[strlen(a) + strlen(b) + 1];
	char* iter_tmp = tmp;
	char const* iter_a = a;
	while (*iter_a)
		*iter_tmp++ = *iter_a++;
	char const* iter_b = b;
	while (*iter_b)
		*iter_tmp++ = *iter_b++;
	*iter_tmp = '\0';

	return tmp;
}

//std::string types
std::string add(std::string a, std::string b) {
	std::cout << "add function for std::string types is called\n";
	return a + b;
}

//Pointers
template<typename T>
T add(T* a, T* b) {
	std::cout << "add function for pointers is called\n";
	return *a + *b;
}

#endif // !TEMPLES_HPP

