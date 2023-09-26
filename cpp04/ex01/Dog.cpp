#include "Dog.hpp"
#include <iostream>

void Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}

Brain* Dog::getBrain() {
	return (_brain);
}

Dog::Dog() {
	std::cout << "Dog Default Constructor has been called" << std::endl;
	type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const &ref) {
	std::cout << "Dog Copy Constructor has been called" << std::endl;
	type = ref.type;
	_brain = new Brain(*ref._brain);
}

Dog& Dog::operator=(Dog const &ref) {
	std::cout << "Dog Copy Assigment Operator has been called" << std::endl;
	if (this != &ref) {
		type = ref.type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*ref._brain);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog Destructor has been called" << std::endl;
	delete _brain;
}