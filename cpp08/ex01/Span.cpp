#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N), _sorted(false) {
}

Span::Span(Span const &ref)  {
	_ints = ref._ints;
	_maxSize = ref._maxSize;
	_sorted = ref._sorted;
}

Span& Span::operator=(Span const &ref) {
	if (this != &ref)
	{
		_ints = ref._ints;
		_maxSize = ref._maxSize;
		_sorted = ref._sorted;
	}
	return (*this);
}

Span::~Span() {}


void Span::addNumber(int n) {
	if (_ints.size() == _maxSize)
		throw(std::out_of_range("Already full of elements"));
	if (_ints.size() > 0 && n < _ints.back())
		_sorted = false;
	_ints.push_back(n);
}

unsigned int Span::shortestSpan() {
	if (_ints.size() < 2)
		throw(std::logic_error("Need more elements to determine span"));
	if (_sorted == false)
	{
		std::sort(_ints.begin(), _ints.end());
		_sorted = true;
	}
	int tmp;
	int shortest = std::numeric_limits<int>::max();
	for (std::vector<int>::iterator it = _ints.begin(); it + 1 != _ints.end(); it++)
	{
		tmp = *(it + 1) - *it;
		if (tmp < shortest)
			shortest = tmp;
	}
	return shortest;
}

unsigned int Span::longestSpan() {
	if (_ints.size() < 2)
		throw(std::logic_error("Need more elements to determine span"));
	if (_sorted == false)
	{
		std::sort(_ints.begin(), _ints.end());
		_sorted = true;
	}
	return _ints.back() - _ints.front();
}

unsigned int Span::getIntIndex(int index) {
	if (index > _ints.size() - 1)
		throw(std::out_of_range("Out of range"));
	return (_ints[index]);
}