#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void f3(T& elem) {
	elem += 1;
}

template<typename T>
void f4(T& elem) {
	std::cout << elem << '\n';
}

template<typename T, typename F>
void iter(T* arr, int len, F f) {
	for (int i = 0; i < len; i++) {
		f(arr[i]);
	}
}

#endif