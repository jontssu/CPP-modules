#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sounds" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (type);
}

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal Default Constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &ref) {
	std::cout << "WrongAnimal Copy Constructor called\n";
	type = ref.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &ref) {
	std::cout << "WrongAnimal Copy Assigment Operator called\n";
	if (this != &ref) {
		type = ref.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}