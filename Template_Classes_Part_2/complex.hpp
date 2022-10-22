#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <iostream>

class Complex {
public:
	// default constructor
	Complex();
	// with parameters
	Complex(double Re, double Im);
	// copy constructor
	Complex(Complex const& c);
	// = operator
	Complex& operator=(Complex const& c);
	// index operator
	double operator[](size_t i) const;
	// +operator
	Complex operator+(Complex const& c) const;
	// output operator
	friend std::ostream& operator<<(std::ostream& out, Complex const& c); //Output operator

private:
	double Re_;
	double Im_;
};
#endif