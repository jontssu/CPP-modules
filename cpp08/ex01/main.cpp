#include "Span.hpp"
#include <iostream>

int main () {
	Span sp = Span(5);


	// for (int i = 0; i < 5; i++) {
	// 	sp.addNumber(i * 100);
	// }
	for (int i = 0; i < 5; i++) {
		std::cout << sp.getIntIndex(i) << '\n';
	}
	return (0);
}