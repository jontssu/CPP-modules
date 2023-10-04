#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& ref) {
	std::cout << "* shoots an ice bolt at " << ref.getName() << " *" << std::endl;
}

Ice::Ice() {}

Ice::Ice(Ice const &ref) {
	_type = ref._type;
}

Ice& Ice::operator=(Ice const &ref) {
	if (this != &ref) {
		_type = ref._type;
	}
	return (*this);
}

Ice::~Ice() {}