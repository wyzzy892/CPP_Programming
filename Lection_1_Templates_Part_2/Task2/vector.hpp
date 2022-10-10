#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <iostream>

class Vector {
public:
	// default constructor
	Vector();
	// constructor with parameter
	Vector(int* arr);
	// destructor
	~Vector();
	// copy constructor
	Vector(Vector const& v);
	// assignment operator
	Vector& operator=(Vector const& v);
	// index operator
	int operator[](int i) const;
	// output operator
	friend std::ostream& operator<<(std::ostream& out, Vector const& v);
private:
	size_t size_=3;
	int* data_;
};
#endif
