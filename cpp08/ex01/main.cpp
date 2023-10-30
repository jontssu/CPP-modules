#include "Span.hpp"
#include <iostream>

int main () {
	Span sp = Span(5);

	try {
		for (int i = 0; i < 10; i++) {
			std::cout << "TRYING TO ADD ELEMENT\n";
			sp.addNumber(i * 100);
		}
		std::cout << "I SUCCEEDED\n";
	}
	catch (std::exception &e) {
		std::cout << e.what() << '\n';
	}
	for (int i = 0; i < 5; i++) {
		std::cout << sp.getIntIndex(i) << '\n';
	}
	return (0);
}