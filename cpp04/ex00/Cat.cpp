#include "Cat.hpp"
#include <iostream>

void Cat::makeSound() const {
	std::cout << "Meoow!" << std::endl;
}

Cat::Cat() {
	std::cout << "Cat Default Constructor has been called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat const &ref) {
	std::cout << "Cat Copy Constructor has been called" << std::endl;
	type = ref.type;
}

Cat& Cat::operator=(Cat const &ref) {
	std::cout << "Cat Copy Assignment Operator has been called" << std::endl;
	if (this != &ref) {
		type = ref.type;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat Destructor has been called" << std::endl;
}