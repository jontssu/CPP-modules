#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void f3(T& elem) {
	elem += 1;
}

template<typename T>
void iter(T* arr, int len, void (*f)(T& elem)) {
	for (int i = 0; i < len; i++) {
		f(arr[i]);
	}
}

#endif