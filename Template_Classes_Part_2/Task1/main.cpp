#include "queueptr.hpp"
#include "complex.hpp"

int main()
{
	Queue<int*> queue_ptr;

	std::cout <<"Quene<int*>\n"<< std::endl;

	queue_ptr.push(new int{ 71 });
	queue_ptr.push(new int{ 9 });

	std::cout << "Size = " << queue_ptr.size() << std::endl;
	std::cout << "Front = " << *queue_ptr.front() << std::endl;
	std::cout << "Back = " << *queue_ptr.back() << std::endl;
	std::cout << "\nPush a few elements ...\n" << std::endl;

	queue_ptr.push(new int{ 187 });
	queue_ptr.push(new int{ -7109 });

	std::cout << "Size = " << queue_ptr.size() << std::endl;
	std::cout << "Front = " << *queue_ptr.front() << std::endl;
	std::cout << "Back = " << *queue_ptr.back() << std::endl;
	std::cout << "\nPush a few elements ...\n" << std::endl;

	queue_ptr.push(new int{ 661 });
	queue_ptr.push(new int{ 1 });

	std::cout << "Size = " << queue_ptr.size() << std::endl;
	std::cout << "Front = " << *queue_ptr.front() << std::endl;
	std::cout << "Back = " << *queue_ptr.back() << std::endl;
	std::cout << "\nPop\n" << std::endl;

	queue_ptr.pop();
	std::cout << "Size = " << queue_ptr.size() << std::endl;
	std::cout << "Front = " << *queue_ptr.front() << std::endl;
	std::cout << "Back = " << *queue_ptr.back() << std::endl;

	Queue<Complex*> comp_ptr;

	std::cout << "\n-------------------------------------------\n" << std::endl;
	std::cout << "\nQuene<Complex*>\n" << std::endl;

	comp_ptr.push(new Complex(0.77, 56.4));

	std::cout << "Size = " << comp_ptr.size() << std::endl;
	std::cout << "Front = " << *comp_ptr.front() << std::endl;
	std::cout << "Back = " << *comp_ptr.back() << std::endl;
	std::cout << "\nPush a few elements ...\n" << std::endl;

	comp_ptr.push(new Complex(89.1, 0));
	std::cout << "Size = " << comp_ptr.size() << std::endl;
	std::cout << "Front = " << *comp_ptr.front() << std::endl;
	std::cout << "Back = " << *comp_ptr.back() << std::endl;

	std::cout << "\nPop\n" << std::endl;
	std::cout << "Size = " << comp_ptr.size() << std::endl;
	std::cout << "Front = " << *comp_ptr.front() << std::endl;
	std::cout << "Back = " << *comp_ptr.back() << std::endl;

	std::cout << "\nCreate c_ptr\n" << std::endl;
	Queue<Complex*> c_ptr;
	c_ptr.push(new Complex(1000, 876));
	std::cout << "comp_ptr Front = " << *comp_ptr.front() << std::endl;
	std::cout << "c_ptr Front = " << *c_ptr.front() << std::endl;

	std::cout << "\nswap( comp_ptr, c_ptr )\n" << std::endl;
	::swap(comp_ptr, c_ptr);
	std::cout << "comp_ptr Front = " << *comp_ptr.front() << std::endl;
	std::cout << "c_ptr Front = " << *c_ptr.front() << std::endl;

	return 0;
}