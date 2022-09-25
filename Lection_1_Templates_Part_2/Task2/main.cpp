#include <iostream>
#include "nontemples.hpp"
#include "temples.hpp"

int main()
{
	int a1[] = {1, 2, 3};
	int a2[] = { 4, 5, 6 };
	Vector v1(a1);
	Vector v2(a2);
	std::cout << "v1 = " << v1 << ", v2 = " << v2 << ", &v1*&v2 = ";
	mult(&v1, &v2);

	int i1 = 10;
	int i2 = 23;
	std::cout << "i1 = " << i1 << ", i2 = " << i2 << ", i1*i2 = ";
	mult(i1, i2);

	float f1 = 2.3f;
	float f2 = 7.87f;
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << ", f1*f2 = ";
	mult(f1, f2);

	double d1 = 34.5;
	double d2 = 89.0;
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << ", d1*d2 = ";
	mult(d1, d2);



	return 0;
}