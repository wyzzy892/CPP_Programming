#include "queue.hpp"
#include <iostream>

int main()
{
	
	Queue<int> q;

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

	std::cout << "Adding elements ...\n";
	q.push(56);
	q.push(11);
	q.push(34);
	q.push(100);
	q.push(152);
	q.push(389);
	q.push(1000);
	std::cout << "size = " << q.size() << std::endl;

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
	std::cout << "After swap\n";
	q1.swap(q2);
	std::cout << "q1 size = " << q1.size() << std::endl;
	std::cout << "q2 size = " << q2.size() << std::endl;
	return 0;
}