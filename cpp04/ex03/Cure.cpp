#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& ref) {
	std::cout << "* heals " << ref.getName() << "'s wounds *" << std::endl;
}

Cure::Cure() {
	_type = "cure";
}

Cure::Cure(Cure const &ref) {
	_type = ref._type;
}

Cure& Cure::operator=(Cure const &ref) {
	if (this != &ref) {
		_type = ref._type;
	}
	return (*this);
}

Cure::~Cure() {}