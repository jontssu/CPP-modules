#include "Animal.hpp"
#include <iostream>

void Animal::makeSound() const {
	std::cout << "Some weird noises" << std::endl;
}

std::string Animal::getType() const {
	return (type);
}

Animal::Animal() {
	std::cout << "Animal Default Constructor has been called" << std::endl;	
	type = "What is this Animal?";
}

Animal::Animal(Animal const &ref) {
	std::cout << "Animal Copy Constructor has been called" << std::endl;
	type = ref.type;
}

Animal& Animal::operator=(Animal const &ref) {
	std::cout << "Animal Copy Assigment Operator has been called" << std::endl;
	if (this != &ref) {
		type = ref.type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal Destructor has been called" << std::endl;
}