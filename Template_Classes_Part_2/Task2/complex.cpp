#include "complex.hpp"

Complex::Complex() :Re_(0), Im_(0) { }

Complex::Complex(double Re, double Im) :Re_(Re), Im_(Im) { }

Complex::Complex(Complex const& c) :Re_(c.Re_), Im_(c.Im_) { }

Complex& Complex::operator=(Complex const& c) {
	if (this != &c) {
		Re_ = c.Re_;
		Im_ = c.Im_;
	}
	return *this;
}

double Complex::operator[](size_t i) const {
	try {
		if (i == 0)
			return Re_;
		else if (i == 1)
			return Im_;
		else
			throw std::invalid_argument("Error! Invalid value. i in [] operator must be 0 or 1\n");
	}
	catch (std::invalid_argument& e) {
		std::cout << e.what() << '\n';
	}
}

Complex Complex::operator+(Complex const& c) const {
	return Complex(Re_ + c.Re_, Im_ + c.Im_);
}

std::ostream& operator<<(std::ostream& out, Complex const& c) {
	if (c.Im_ < 0)
		out << c.Re_ << c.Im_ << "i";
	else
		out << c.Re_ << "+" << c.Im_ << "i";
	return out;
}