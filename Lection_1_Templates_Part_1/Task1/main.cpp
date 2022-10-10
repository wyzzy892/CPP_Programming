#include <iostream>
#include <string>
#include "my_templ.hpp"

struct A{};
struct B{};

int main()
{
	int a = 2;
	int b = 11;
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(1.0, 4.) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	double s = 34.7;
	std::cout << "s = " << s <<", b = "<<b<< std::endl;
	std::cout << "max( b, s ) = " << ::max(b, s) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	return 0;
}