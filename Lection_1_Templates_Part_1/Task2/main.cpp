#include <iostream>
#include "my_templ.hpp"

int power(int value);

int main()
{
	size_t n = 10;
	int* arr = new int[n];
	for(size_t i=0; i<n; i++)
		arr[i]=i+1;
	
	iter(arr, n, power);
	
	delete[] arr;
	
	return 0;
}

int power(int value) {
	return value * value;
}