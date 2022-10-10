#include <iostream>
#include "my_templ.hpp"

int main()
{
	size_t n = 10;

	int* i_arr = new int[n];
	init(i_arr, n);

	long* l_arr = new long[n];
	init(l_arr, n);

	double* d_arr = new double[n];
	init(d_arr, n);

	float* f_arr = new float[n];
	init(f_arr, n);

	char* c_arr = new char[n];
	init(c_arr, n);

	bool* b_arr = new bool[n];
	init(c_arr, n);

	iter(i_arr, n, power);
	iter(l_arr, n, power);
	iter(d_arr, n, power);
	iter(f_arr, n, power);
	iter(c_arr, n, power);
	iter(b_arr, n, power);

	delete[] i_arr;
	delete[] l_arr;
	delete[] d_arr;
	delete[] f_arr;
	delete[] c_arr;
	delete[] b_arr;

	return 0;
}