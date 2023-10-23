#include "Array.hpp"
#include <iostream>

int main() {
	Array<int> a(5);

	for (int i = 0; i < 5; i++) {
		std::cout << a[i] << '\n';
	}
	return (0);
}