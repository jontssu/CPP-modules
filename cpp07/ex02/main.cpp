#include "Array.hpp"
#include <iostream>

int main() {
	Array<int> a(0);

	try {
		std::cout << a[0] << '\n';
		std::cout << "SUCCESS\n";
	}
	catch (...) {
		std::cout << "\nFAIL\n";
	}
	// Array<int> a(5);

	// for (int i = 0; i < 5; i++) {
	// 	a.increment(i);
	// }

	// for (int i = 0; i < 5; i++) {
	// 	std::cout << a[i] << '\n';
	// }

	// std::cout << "\n\n";

	// Array<int> b = a;

	// for (int i = 0; i < 5; i++) {
	// 	a.increment(i);
	// }

	// for (int i = 0; i < 5; i++) {
	// 	std::cout << b[i] << '\n';
	// }

	// std::cout << "\n\n";

	// try {
	// 	std::cout << b[4] << '\n';
	// 	std::cout << "SUCCESS\n";
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << '\n';
	// }

	// std::cout << "\n\n";

	// try {
	// 	std::cout << b[10] << '\n';
	// 	std::cout << "SUCCESS\n";
	// }
	// catch (std::exception &e) {
	// 	std::cout << '\n' << e.what() << '\n';
	// }
	return (0);
}