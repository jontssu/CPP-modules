#include "Ice.hpp"
#include <iostream>

void Ice::use(ICharacter& ref) {
	std::cout << "* shoots an ice bolt at " << ref.getName() << " *" << std::endl;
}

Ice::Ice() {}

Ice::Ice(Ice const &ref) {

}

Ice& Ice::operator=(Ice const &ref) {

}

Ice::~Ice() {}