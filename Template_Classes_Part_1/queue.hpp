#ifndef QUEUE_HPP
#define QUEUE_HPP
#include <cassert>
#include <algorithm>
#include <utility>
#include <string_view>

template<class T>
class Queue
{
private:
	size_t count; // number of elements
	size_t capacity; // capacity of queue
	size_t head; // first element index
	size_t last; // last index
	T* data; // elements

	// allocate new memory if number of elements is more than capacity
	void allocateMemory() {
		capacity *= 2;
		T* temp = new T[capacity];
		for (size_t i = 0; i < count; i++)
			temp[i] = data[head++];
		delete[] data;
		data = temp;
		head = 0;
		last = count - 1;
	}
public:
	Queue();
	Queue(Queue const& q);
	~Queue();
	Queue& operator=(Queue const& q);

	// Capacity
	size_t size() const;
	bool empty() const;

	// Element access
	T front() const;
	T back() const;

	// Modifiers
	void push(T const& value);
	void pop();
	void swap(Queue& c) {
		std::swap(count, c.count);
		std::swap(capacity, c.capacity);
		std::swap(head, c.head);
		std::swap(last, c.last);
		auto tmp = c;
		c = this;
		*this = tmp;
	}

};

template<class T>
Queue<T>::Queue()
{
	count = 0;
	capacity = 5;
	head = 0;
	last = -1;
	data = new T[capacity];
}
template<class T>
Queue<T>::Queue(Queue const& q)
{
	delete[] data;
	count = q.count;
	capacity = q.capacity;
	head = q.head;
	last = q.last;
	data = new T[capacity];
	for (size_t i = 0; i < count; i++)
		data[i] = q.data[i];
}
template<class T>
Queue<T>::~Queue()
{
	delete[] data;
}
template<class T>
Queue<T>& Queue<T>::operator=(Queue const& q) {
	if (this != q) {
		delete[] data;
		count = q.count;
		capacity = q.capacity;
		head = q.head;
		last = q.last;
		data = new T[capacity];
		for (size_t i = 0; i < count; i++)
			data[i] = q.data[i];
	}
	return *this;
}

// Capacity
template<class T>
size_t Queue<T>::size() const {
	return count;
}
template<class T>
bool Queue<T>::empty() const {
	return count == 0;
}

// Element access
template<class T>
T Queue<T>::front() const {
	assert(!empty());
	return data[head];
}
template<class T>
T Queue<T>::back() const {
	assert(!empty());
	return data[last];
}

// Modifiers
template<class T>
void Queue<T>::push(T const& value) {
	if (count == 0 && head == capacity) {
		head = 0;
		last = -1;
	}
	if (capacity-last==1)
		allocateMemory();
	data[++last] = value;
	count++;
}
template<class T>
void Queue<T>::pop() {
	assert(!empty());
	head++;
	count--;
}
#endif // !QUEUE_HPP

