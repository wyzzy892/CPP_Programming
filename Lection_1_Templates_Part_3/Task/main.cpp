#include "temples.hpp"
#include "matrix.hpp"
#include <random>

int** initialize_array(int** a);

int main()
{
	//Real values
	std::cout << ::add(2.3, 5.1) << std::endl;
	std::cout << ::add(200, 102) << std::endl;
	std::cout << ::add(Complex(2,3), Complex(4.5, 8.1))<<std::endl;

	//Matrices
	int** arr1 = new int*[2];
	int** arr2 = new int*[2];

	initialize_array(arr1);
	initialize_array(arr2);

	Matrix matrix1(arr1);
	Matrix matrix2(arr2);

	std::cout << ::add(matrix1, matrix2) << std::endl;
	
	//Pointers
	int i1 = 10;
	int i2 = 38;
	
	int* ptr_i1 = &i1;
	int* ptr_i2 = &i2;

	std::cout << ::add(ptr_i1, ptr_i2) << std::endl;

	float f1 = 34.56f;
	float f2 = 6.98f;

	std::cout << ::add(&f1, &f2) << std::endl;
	std::cout << ::add(&matrix1, &matrix2) << std::endl;
	
	//C-style string
	char const str1[] = "Somebody once";
	char const str2[] = " told me";

	std::cout << ::add(str1, str2) << std::endl;

	//std::string
	std::string s1 = "What a ";
	std::string s2 = "story, Mark";
	std::cout << ::add(s1, s2) << std::endl;
	
	//S-style string
	std::cout << ::add("Hello", " there") << std::endl;

	return 0;
}

int** initialize_array(int** a) {
	for (size_t i = 0; i < 2; i++) {
		a[i] = new int[2];
		for (size_t j = 0; j < 2; j++) {
			a[i][j] = rand() % 10;
		}
	}
	return a;
}