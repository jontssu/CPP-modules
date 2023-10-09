#include "MateriaSource.hpp"
#include <iostream>

void MateriaSource::learnMateria(AMateria* ref) {
	for (int i = 0; i < 4; i++) {
		if (!_memory[i] && ref) {
			std::cout << "Learning " << ref->getType() << " Materia at Index: " << i << std::endl;
			_memory[i] = ref; 
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std:: string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_memory[i] && type == _memory[i]->getType()) {
			std::cout << "Creating Materia " << type << std::endl;
			return (_memory[i]->clone());
		}
	}
	return (0);
}

AMateria* MateriaSource::getMateriaIdx(int idx) {
	return (_memory[idx]);
}

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource Default constructor has been called" << std::endl;
	for (int i = 0; i < 4; i++) {
		_memory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &ref) {
	for (int i = 0; i < 4; i++) {
		if (ref._memory[i])
			_memory[i] = ref._memory[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const &ref) {
	if (this != &ref) {
		for (int i = 0; i < 4; i++) {
			if (_memory[i])
				delete _memory[i];
			if (ref._memory[i])
				_memory[i] = ref._memory[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_memory[i])
			delete _memory[i];
	}
}