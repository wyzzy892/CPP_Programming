#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <iostream>

class Vector {
public:
	//constructors
	Vector() {
		data_ = new int[size_];
		for (size_t i = 0; i < size_; ++i) {
			data_[i] = 0;
		}
	}
	Vector(int* arr) {
		data_ = new int[size_];
		for (size_t i = 0; i < size_; ++i) {
			data_[i] = arr[i];
		}
	}
	//destructor
	~Vector()
	{
		delete[] data_;
	}
	//copy constructor
	Vector(Vector const& v) {
		data_ = new int[size_];
		for (size_t i = 0; i < size_; ++i) {
			data_[i] = v.data_[i];
		}
	}
	//copy operator
	Vector& operator=(Vector const& v) {
		if (this != &v) {
			delete[] data_;
			data_ = new int[size_];
			for (size_t i = 0; i < size_; ++i) {
				data_[i] = v.data_[i];
			}
		}
		return *this;
	}
	//index operator
	int operator[](int i) const {
		if (i >= 0 && i < size_) {
			return data_[i];
		}
	}
	//output operator
	friend std::ostream& operator<<(std::ostream& out, Vector const& v);
private:
	size_t size_=3;
	int* data_;
};

inline std::ostream& operator<<(std::ostream& out, Vector const& v) {
	out << "( " << v[0] << ", " << v[1] << ", " << v[2] << " )";
	return out;
}

#endif
