#ifndef NONTEMPLES_HPP
#define NONTEMPLES_HPP
#include <iostream>

//long mult| int->long 
void mult(long x, long y) {
	std::cout<< x*y << " Long mult\n\n";
}

//double mult| float->double
void mult(double x, double y) {
	std::cout<< x * y<<" Double mult\n\n";
}

#endif // !NONTEMPLES_HPP
