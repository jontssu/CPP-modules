#include "Data.hpp"

Data::Data() : _a(0), _b(0) {}

Data::Data(int a, int b) : _a(a), _b(b) {}

Data::Data(Data const &ref) {
	_a = ref._a;
	_b = ref._b;
}

Data& Data::operator=(Data const &ref) {
	if (this != &ref) {
		_a = ref._a;
		_b = ref._b;
	}
	return (*this);
}

Data::~Data() {}