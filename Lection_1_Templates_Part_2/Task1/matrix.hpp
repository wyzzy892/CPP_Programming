#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>

class Matrix {
public:
	//конструктор по умолчанию
	Matrix() : size_(3) {
		matr = new int* [size_];
		for (size_t i = 0; i < size_; ++i) {
			matr[i] = new int[size_];
			for (size_t j = 0; j < size_; ++j) {
				matr[i][j] = 0;
			}
		}
	}
	//конструктор
	Matrix(int** m) : size_(3) {
		matr = new int* [size_];
		for (size_t i = 0; i < size_; ++i) {
			matr[i] = new int[size_];
			for (size_t j = 0; j < size_; ++j) {
				matr[i][j] = m[i][j];
			}
		}
	}
	//деструктор
	~Matrix() {
		for (size_t i = 0; i < size_; ++i)
			delete[] matr[i];
		delete[] matr;
	}
	//конструктор копирования
	Matrix(Matrix const& m) {
		size_ = m.size_;
		matr = new int*[size_];
		for (size_t i = 0; i < size_; ++i) {
			matr[i] = new int[size_];
		}
	}
	//оператор присваивания
	Matrix& operator=(Matrix const& m) {
		if (this != &m) {
			for (size_t i = 0; i < size_; ++i)
				delete[] matr[i];
			delete[] matr;

			size_ = m.size_;
			matr = new int* [size_];
			for (size_t i = 0; i < size_; ++i) {
				matr[i] = new int[size_];
			}
		}
	}
	//get(i, j)
	double get(int i, int j) const{
		return matr[i][j];
	}
	friend std::ostream& operator<<(std::ostream& out, Matrix const& m);
private:
	size_t size_;
	int** matr;
};

inline std::ostream& operator<<(std::ostream& out, Matrix const& m) {
	for (size_t i = 0; i < 3; i++) {
		for (size_t j = 0; j < 3; j++)
			out << m.matr[i][j] << ' ';
		out << '\n';
	}
	return out;
}

#endif // !MATRIX_HPP

