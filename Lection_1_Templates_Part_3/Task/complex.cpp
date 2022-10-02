#include "complex.hpp"

Complex::Complex(double Re = 0, double Im = 0) :Re_(Re), Im_(Im) { }

Complex::Complex(Complex const& c) :Re_(c.Re_), Im_(c.Im_) { }

Complex& Complex::operator=(Complex const& c) {
	if (this != &c) {
		Re_ = c.Re_;
		Im_ = c.Im_;
	}
	return *this;
}

double Complex::operator[](size_t i) const {
	return i == 0 ? Re_ : Im_;
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