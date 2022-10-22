#ifndef STACKPAIR_HPP
#define STACKPAIR_HPP

#include "stack.hpp"
#include <utility>

template<typename T1, typename T2> 
class Stack<std::pair<T1,T2>> {
private:
	std::vector<std::pair<T1, T2>> elems;
public:
	void push(std::pair<T1, T2> const& elem);
	void pop();
	std::pair<T1, T2> const& top() const;
	bool empty() const {
		return elems.empty();
	}
	template<typename T> friend std::ostream& operator<<(std::ostream& out, const Stack<std::pair<T1, T2>>& s);
};

template<typename T1, typename T2>
void Stack<std::pair<T1, T2>>::push(std::pair<T1, T2> const& elem) {
	elems.push_back(elem);
}

template<typename T1, typename T2>
void Stack<std::pair<T1, T2>>::pop() {
	assert(!elems.empty());
	elems.pop_back();
}

template<typename T1, typename T2>
std::pair<T1, T2> const& Stack<std::pair<T1, T2>>::top() const {
	assert(!elems.empty());
	return elems.back();
}

template<typename T1, typename T2>
std::ostream& operator<<(std::ostream& out, Stack<std::pair<T1, T2>>& s) {
	std::vector<std::pair<T1, T2>> tmp;

	while (!s.empty())
	{
		std::pair<T1, T2> t = s.top();
		tmp.push_back(t);
		out << "( " << t.first << ", " << t.second << " )    ";
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