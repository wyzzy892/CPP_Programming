#include "complex.hpp"
#include "stackpair.hpp"

int main()
{
	Stack<int> stack;
	stack.push(45);
	stack.push(7);
	stack.push(-3);
	std::cout << "<< operator implementation for Stack<T>\n" << stack << std::endl;
	
	std::cout << "\n";

	Stack<std::pair<Complex, int>> stackpair;
	stackpair.push(std::make_pair(Complex(17.5, 5.78), 101));
	stackpair.push(std::make_pair(Complex(11.9, 0.12), 67));
	stackpair.push(std::make_pair(Complex(0.4, -3), 55));
	stackpair.push(std::make_pair(Complex(89, 15.65), 42));
	stackpair.push(std::make_pair(Complex(-107, 3.08), 99));

	std::cout << "<< operator implementation for Stack<std::pair<T1,T2>>\n" << stackpair << std::endl;

	return 0;
}