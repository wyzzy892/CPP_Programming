#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <iostream>

class Complex {
public:
	//default constructor
	Complex(double Re = 0, double Im = 0) :Re_(Re), Im_(Im) { }
	//constructor with parameters
	Complex(Complex const& c) :Re_(c.Re_), Im_(c.Im_) { }
	//= operator
	Complex& operator=(Complex const& c) {
		if (this != &c) {
			Re_ = c.Re_;
			Im_ = c.Im_;
		}
		return *this;
	}
	//index operator
	double operator[](size_t i) const { //index operator
		return i == 0 ? Re_ : Im_;
	}
	//+operator
	Complex operator+(Complex const& c) const{
		return Complex(Re_+c.Re_, Im_+c.Im_);
	}
	//output operator
	friend std::ostream& operator<<(std::ostream& out, Complex const& c); //Output operator

private:
	double Re_;
	double Im_;
};

inline std::ostream& operator<<(std::ostream& out, Complex const& c) {
	if (c.Im_ < 0)
		out << c.Re_ << c.Im_ << "i";
	else
		out << c.Re_ << "+" << c.Im_ << "i";
	return out;
}
#endif // !COMPLEX_HPP

