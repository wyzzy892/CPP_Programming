#include <iostream>
#include "queue.hpp"
#include "complex.hpp"

int main()
{
	Queue<int> q;
	std::cout << "q size = " << q.size() << std::endl<<"q = ";
	for (size_t i = 0; i < 5; i++) {
		q.push((int)i+1);
		std::cout << q.back() << " ";
	}

	std::cout<<std::endl;

	while (q.size()>2) {
		std::cout << q.front() << " ";
		q.pop();
	}
	std::cout <<std::endl<< q.front() <<" " << q.back() << std::endl;
	std::cout <<std::endl<<"size = "<<q.size() << std::endl;

	q.pop();
	q.pop();

	std::cout << "Adding elements to q ...\n";
	q.push(56);
	q.push(11);
	q.push(34);
	q.push(100);
	q.push(152);
	q.push(389);
	q.push(1000);
	std::cout << "q size = " << q.size() << std::endl;

	std::cout << "\nCreating q1 and q2:\n";
	Queue<double> q1;
	q1.push(2.0);
	q1.push(3.8);
	Queue<double> q2;
	q2.push(5.7);
	q2.push(4.5);
	q2.push(11.67);
	q2.push(0.98);
	std::cout << "q1 size = " << q1.size() << std::endl;
	std::cout << "q2 size = " << q2.size() << std::endl;
	std::cout << "After swap( q1, q2 )\n";
	q1.swap(q2);
	std::cout << "q1 size = " << q1.size() << std::endl;
	std::cout << "q2 size = " << q2.size() << std::endl;
	std::cout << "\nAnother q1.swap( q2 )\n";
	::swap(q1, q2);
	std::cout << "q1 size = " << q1.size() << std::endl;
	std::cout << "q2 size = " << q2.size() << std::endl;
	std::cout << "\nAdding elements to q2 ...\n";
	for (int i = 0; i < 10; i++) {
		q2.push(rand() % 100);
	}
	std::cout << "\nq2 size = "<<q2.size() << std::endl;
	std::cout << "Moving q2: ";
	while (q2.size()>0)
	{
		std::cout << q2.front() << " ";
		q2.pop();
	}
	std::cout << "\nq2 size = " << q2.size()<<std::endl;

	std::cout << "\nCreating a queue of complex numbers.\ncomplex queue ";
	Queue<Complex> complex;
	std::cout << (complex.empty() ? "is empty" : "is not empty") << std::endl;
	complex.push(Complex(2.3, 4.));
	std::cout << complex.front()<<std::endl;
	complex.push(Complex(0.0, 96.7));
	std::cout << complex.back() << std::endl;

	return 0;
}