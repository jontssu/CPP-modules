#include "Cure.hpp"

void Cure::use(ICharacter& ref) {
	std::cout << "* heals " << ref.getName() << "'s wounds *" << std::endl;
}

Cure::Cure() {}

Cure::Cure(Cure const &ref) {

}

Cure& Cure::operator=(Cure const &ref) {

}

Cure::~Cure() {}