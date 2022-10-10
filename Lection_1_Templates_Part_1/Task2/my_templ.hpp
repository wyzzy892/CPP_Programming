#ifndef MY_TEMPL_HPP
#define MY_TEMPL_HPP

template<typename T>
void iter(T* arr, size_t size, T(*f)(T)) {
	const std::type_info& t = typeid(T);  // запоминаем имя типа
	std::cout << t.name() << ": ";  // вывод имени типа
	for (size_t i = 0; i < size; i++)  // вызов функции f в цикле для массива arr
		std::cout << f(arr[i])<<" ";
	std::cout << std::endl;
}

template<typename T>
T power(T value) {
	return value * value;
}

template<typename T>
void init(T* a, size_t size) {
	for (size_t i = 0; i < size; i++) {
		a[i] = ((T)3*(rand()%100)) / 10;
	}
}

#endif
