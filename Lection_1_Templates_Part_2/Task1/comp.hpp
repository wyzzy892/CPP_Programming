#ifndef COMP_HPP
#define COMP_HPP

#include <iostream>

class Comp {
public:
	Comp(double Re = 0, double Im = 0) : Re_(Re), Im_(Im) {} 	//Constructor
	Comp(Comp const& c) : Re_(c.Re_), Im_(c.Im_) {}   //Copy constructor
	Comp& operator=(Comp const& c) {  	        //= operator
		if (this != &c) {
			Re_ = c.Re_;
			Im_ = c.Im_;
		}
		return *this;
	}                                       
	double operator[](size_t i) const{ //index operator
		return i == 0 ? Re_ : Im_;
	}
	friend std::ostream& operator<<(std::ostream& out, Comp const& c); //Output operator
private:
	double Re_;
	double Im_;
};

inline std::ostream& operator<<(std::ostream& out, Comp const& c) {
	if (c.Im_ < 0)
		out << c.Re_ << c.Im_ << "i";
	else
		out << c.Re_ << "+" << c.Im_ << "i";
	return out;
}
#endif
