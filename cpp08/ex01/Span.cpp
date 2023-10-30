#include "Span.hpp"

void Span::addNumber(int n) {
	if (_ints.size() == _maxSize)
		throw(std::out_of_range("Already full of elements"));
	_ints.insert(_ints.end(), n);
}

void Span::shortestSpan() {

}

void Span::longestSpan() {

}

unsigned int Span::getIntIndex(int index) {
	return (_ints[index]);
}

Span::Span(unsigned int N) : _maxSize(N) {
}

Span::Span(Span const &ref)  {
}

// Span& Span::operator=(Span const &ref) {
// }

Span::~Span() {}