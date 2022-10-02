#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>

class Matrix {
public:
	//default constructor
	Matrix() {
		data_ = new int* [2];
		for (size_t i = 0; i < 2; i++) {
			data_[i] = new int[2];
			for (size_t j = 0; j < 2; j++)
				data_[i][j] = 0;
		}
	}
	//constructor with parameters
	Matrix(int** a) {
		data_ = new int* [2];
		for (size_t i = 0; i < 2; i++) {
			data_[i] = new int[2];
			for (size_t j = 0; j < 2; j++)
				data_[i][j] = a[i][j];
		}
	}
	//copy constructor
	Matrix(Matrix const& m) : data_(m.data_) {
		for (size_t i = 0; i < 2; ++i)
			for (size_t j = 0; j < 2; j++)
				data_[i][j] = m.data_[i][j];
	}
	//destructor
	~Matrix(){
		for(size_t i=0; i<2; i++)
			delete[] data_[i];
		delete[] data_;
	}
	//= operator
	Matrix& operator=(Matrix const& m) {
		if (this != &m) {
			for (size_t i = 0; i < 2; i++)
				delete[] data_[i];
			delete[] data_;

			data_ = new int* [2];
			for (size_t i = 0; i < 2; ++i) {
				data_[i] = new int[2];
				for (size_t j = 0; j < 2; j++)
					data_[i][j] = m.data_[i][j];
			}
		}
		return *this;
	}
	//+ operator
	Matrix operator+(Matrix const& m) const {
		Matrix res;
		for (size_t i = 0; i < 2; ++i) {
			for (size_t j = 0; j < 2; j++)
				res.data_[i][j] = data_[i][j] + m.data_[i][j];
		}
		return res;
	}
	//output operator
	friend std::ostream& operator<<(std::ostream& out, Matrix const& m);
private:
	//size_t size_ = 2;
	int** data_;
};

inline std::ostream& operator<<(std::ostream& out, Matrix const& m) {
	for (size_t i = 0; i < 2; i++) {
		for (size_t j = 0; j < 2; j++)
			out << m.data_[i][j] << ' ';
		out << '\n';
	}
	return out;
}



#endif // !MATRIX_HPP
