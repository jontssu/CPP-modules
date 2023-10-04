#include "Character.hpp"
#include <string>

std::string const & Character::getName() const {
}

void Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3 && _inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3 && _inventory[idx])
		_inventory[idx]->use(target);
}


Character::Character() : _name("Nameless") {
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(Character const &ref) {
	if (this != &ref) {
		_name 
	}
}

Character& Character::operator=(Character const &ref) {

}

Character::~Character() {}