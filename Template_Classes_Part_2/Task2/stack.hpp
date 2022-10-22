#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <vector>
#include <cassert>

template<typename T>
class Stack
{
private:
	std::vector<T> elems;
public:
	void push(T const& elem);
	void pop();
	T const& top() const;
	bool empty() const {
		return elems.empty();
	}
	template<typename T> friend std::ostream& operator<<(std::ostream& out, const Stack<T>& s);
};

template<typename T>
void Stack<T>::push(T const& elem) {
	elems.push_back(elem);
}

template<typename T>
void Stack<T>::pop() {
	assert(!elems.empty());
	elems.pop_back();
}

template<typename T>
T const& Stack<T>::top() const {
	assert(!elems.empty());
	return elems.back();
}

template<typename T>
std::ostream& operator<<(std::ostream& out, Stack<T>& s) {
	std::vector<T> tmp;
	
	while (!s.empty())
	{
		tmp.push_back(s.top());
		out << tmp.back() << " ";
		s.pop();
	}
	out << std::endl;

	while (!tmp.empty())
	{
		s.push(tmp.back());
		tmp.pop_back();
	}
	tmp.clear();

	return out;
}
#endif