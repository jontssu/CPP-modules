#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(AMateria const &ref) {
	(void)ref;
}

AMateria& AMateria::operator=(AMateria const &ref) {
	(void)ref;
	return (*this);
}

AMateria::~AMateria() {}