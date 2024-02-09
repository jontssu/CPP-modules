#include "Span.hpp"
#include <iostream>

int main () {
	Span sp = Span(5);

// do number generator
	try {
		for (int i = 0; i < 10; i++) {
			sp.addNumber(i + (i * i *100));
			std::cout << "ADDED ELEMENT\n";
		}
		std::cout << "I SUCCEEDED\n";
	}
	catch (std::exception &e) {
		std::cout << e.what() << '\n';
	}
	for (int i = 0; i < 5; i++) {
		std::cout << sp.getIntIndex(i) << '\n';
	}
	
	std::cout << "Shortest span:" << sp.shortestSpan() << "\n";
	std::cout << "Longest span:" << sp.longestSpan() << "\n";

	return (0);
}