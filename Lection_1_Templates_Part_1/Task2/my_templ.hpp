#ifndef MY_TEMPL_HPP
#define MY_TEMPL_HPP

template<typename T1, typename T2, typename T3>
void iter(T1* arr, T2 size, T3(*f)(T1)) {
	for (T1* it = arr; it != (it + size); ++it)
		std::cout<<f(*it);
}

template<typename T>
auto foo(T el) {
	return T * T;
}


#endif
