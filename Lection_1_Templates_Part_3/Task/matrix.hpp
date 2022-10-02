#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>

class Matrix {
public:
	//default constructor
	Matrix();
	//constructor with parameters
	Matrix(int** a);
	//copy constructor
	Matrix(Matrix const& m);
	//destructor
	~Matrix();
	//= operator
	Matrix& operator=(Matrix const& m);
	//+ operator
	Matrix operator+(Matrix const& m) const;
	//output operator
	friend std::ostream& operator<<(std::ostream& out, Matrix const& m);
private:
	//size_t size_ = 2;
	int** data_;
};

#endif // !MATRIX_HPP
