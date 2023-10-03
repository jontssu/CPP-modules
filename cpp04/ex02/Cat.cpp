#include "Cat.hpp"
#include <iostream>

void Cat::makeSound() const {
	std::cout << "Meoow!" << std::endl;
}

Brain* Cat::getBrain() {
	return (_brain);
}

Cat::Cat() {
	std::cout << "Cat Default Constructor has been called" << std::endl;
	type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &ref) {
	std::cout << "Cat Copy Constructor has been called" << std::endl;
	type = ref.type;
	_brain = new Brain(*ref._brain);
}

Cat& Cat::operator=(Cat const &ref) {
	std::cout << "Cat Copy Assignment Operator has been called" << std::endl;
	if (this != &ref) {
		type = ref.type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*ref._brain);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat Destructor has been called" << std::endl;
	delete _brain;
}