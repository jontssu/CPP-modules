#include "Character.hpp"
#include <string>
#include <iostream>

std::string const & Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			std::cout << "Equipping" << std::endl;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3 && _inventory[idx]) {
		std::cout << "Unequipping" << std::endl;
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3 && _inventory[idx]) {
		std::cout << "Using idx " << idx << std::endl;
		_inventory[idx]->use(target);
	}
}


Character::Character() : _name("Nameless") {
	std::cout << "Character Default Constructor has been called" << std::endl;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Character Name Constructor has been called" << std::endl;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(Character const &ref) {
	_name = ref._name;
	for (int i = 0; i < 4; i++) {
		if (ref._inventory[i])
			_inventory[i] = ref._inventory[i]->clone();
	}
}

Character& Character::operator=(Character const &ref) {
	if (this != &ref) {
		_name = ref._name;
		for (int i = 0; i < 4; i++) {
			if (_inventory[i])
				delete _inventory[i];
			if (ref._inventory[i]) {
				_inventory[i] = ref._inventory[i]->clone();
			}
		}
	}
	return (*this);
}

Character::~Character() {}