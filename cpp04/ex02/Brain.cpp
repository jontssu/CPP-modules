#include "Brain.hpp"
#include <iostream>

void Brain::setIdea(std::string idea) {
	if (_count == 100)
		_count = 0;
	_ideas[_count] = idea;	
	_count++;
}

void Brain::printIdea(int ideaIndex) {
	std::cout << "Let me think.. my idea was: " << _ideas[ideaIndex] << std::endl;
}

void Brain::printAllIdeas() {
	for (int i = 0; !_ideas[i].empty(); i++) {
		std::cout << "Idea " << i << ": "<< _ideas[i] << std::endl;
	}
}

Brain::Brain() : _count(0) {
	std::cout << "Brain Default Constructor has been called" << std::endl;
}

Brain::Brain(Brain const &ref) : _count (0) {
	std::cout << "Brain Copy Constructor has been called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = ref._ideas[i];
}

Brain& Brain::operator=(Brain const &ref) {
	std::cout << "Brain Copy Assignment operator has been called" << std::endl;
	if (this != &ref) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = ref._ideas[i];
		_count = 0;
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain Destructor has been called" << std::endl;
}