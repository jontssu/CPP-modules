#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

void AMateria::use(ICharacter &target) {
	std::cout << "Nothing happens to " << target.getName() << " .. unlucky" << std::endl;
}

std::string const & AMateria::getType() const {
	return (_type);
}

AMateria::AMateria() : _type("Neutral") {}

AMateria::AMateria(AMateria const &ref) {
	_type = ref._type;
}

AMateria& AMateria::operator=(AMateria const &ref) {
	if (this != &ref) {
		_type = ref._type;
	}
	return (*this);
}

AMateria::~AMateria() {}