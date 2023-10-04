#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* ref) {
	for (int i = 0; i < 4; i++) {
		if (!_memory[i] && ref) {
			_memory[i] = ref; 
		}
	}
}

AMateria* MateriaSource::createMateria(std:: string const & type) {
	for (int i = 0; i < 4; i++) {
		if (type == _memory[i].getType())
			return (_memory[i].clone());
	}
	return (0);
}

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		_memory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &ref) {
}

MateriaSource& MateriaSource::operator=(MateriaSource const &ref) {
	if (this != &ref) {
	}
	return (*this);
}

MateriaSource::~MateriaSource() {}