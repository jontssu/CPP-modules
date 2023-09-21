#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain Default Constructor has been called" << std::endl;
}

Brain::Brain(Brain const &ref) {
	std::cout << "Brain Copy Constructor has been called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = ref._ideas[i];
}

Brain& Brain::operator=(Brain const &ref) {
	std::cout << "Brain Copy Assignment operator has been called" << std::endl;
	if (this != &ref) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = ref._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain Destructor has been called" << std::endl;
}