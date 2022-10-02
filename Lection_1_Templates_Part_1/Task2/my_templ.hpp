#ifndef MY_TEMPL_HPP
#define MY_TEMPL_HPP

template<typename T1, typename T2>
void iter(T1* arr, size_t size, T2(*f)(T1)) {
	for (size_t i = 0; i < size; i++)
		std::cout << f(arr[i])<<std::endl;
}

#endif
