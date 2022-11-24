#ifndef FACTORIAL_HPP
#define FACTORIAL_HPP

template<unsigned N>
struct factorial {
	static const unsigned value = N * factorial<N - 1>::value;
};

template<>
struct factorial<0> {
	static const unsigned value = 1;
};
#endif // !FACTORIAL_HPP

