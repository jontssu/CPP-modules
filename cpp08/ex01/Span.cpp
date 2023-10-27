#include "Span.hpp"

// Span::Span() {}

Span::Span(unsigned int N) {
	_ints = new unsigned int[5];
}

Span::Span(Span const &ref)  {
}

Span& Span::operator=(Span const &ref) {
}

Span::~Span() {}
