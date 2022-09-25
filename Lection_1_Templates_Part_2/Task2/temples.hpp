#ifndef TEMPLES_HPP
#define TEMPLES_HPP
#include "vector.hpp"

//comment to use nontemplates
//uncomment to use templates

//general template 
template<typename T>
void mult(T x, T y) {
	std::cout<< x * y << " General Template\n\n";
}

//pointer template
template<typename T>
void mult(T* x, T* y) {
	std::cout<< x<<" "<<y << " Pointer template\n\n";
}

//template<typename T>
//void mult(T&& x, T&& y) {
//	std::cout<< x * y << "\n\n";
//}
#endif
