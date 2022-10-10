#ifndef MY_TEMPL_HPP
#define MY_TEMPL_HPP

//swap
template<typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//min
template<typename T1, typename T2>
auto min(T1 a, T2 b) -> decltype(a < b ? a : b) {
	return a < b ? a : b;
}

//max
template<typename T1, typename T2>
auto max(T1 a, T2 b) -> decltype(a > b ? a : b) {
	return a > b ? a : b;
}
#endif