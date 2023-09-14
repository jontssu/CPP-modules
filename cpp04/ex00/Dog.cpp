#include "Dog.hpp"
#include <iostream>

void Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}

Dog::Dog() {
	std::cout << "Dog Default Constructor has been called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const &ref) {
	std::cout << "Dog Copy Constructor has been called" << std::endl;
	type = ref.type;
}

Dog& Dog::operator=(Dog const &ref) {
	std::cout << "Dog Copy Assigment Operator has been called" << std::endl;
	if (this != &ref) {
		type = ref.type;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog Destructor has been called" << std::endl;
}