#include "Span.hpp"
#include <iostream>

int main () {
	Span sp = Span(5);

	for (int i = 0; i < 5; i++) {
		std::cout << sp[i] << '\n';
	}
	return (0);
}