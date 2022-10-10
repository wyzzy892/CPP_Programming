#include "vector.hpp"

Vector::Vector() {
	data_ = new int[size_];
	for (size_t i = 0; i < size_; ++i) {
		data_[i] = 0;
	}
}

Vector::Vector(int* arr) {
	data_ = new int[size_];
	for (size_t i = 0; i < size_; ++i) {
		data_[i] = arr[i];
	}
}

Vector::~Vector()
{
	delete[] data_;
}

Vector::Vector(Vector const& v) {
	data_ = new int[size_];
	for (size_t i = 0; i < size_; ++i) {
		data_[i] = v.data_[i];
	}
}

Vector& Vector::operator=(Vector const& v) {
	if (this != &v) {
		delete[] data_;
		data_ = new int[size_];
		for (size_t i = 0; i < size_; ++i) {
			data_[i] = v.data_[i];
		}
	}
	return *this;
}

int Vector::operator[](int i) const {
	if (i >= 0 && i < size_) {
		return data_[i];
	}
}

std::ostream& operator<<(std::ostream& out, Vector const& v) {
	out << "( " << v[0] << ", " << v[1] << ", " << v[2] << " )";
	return out;
}