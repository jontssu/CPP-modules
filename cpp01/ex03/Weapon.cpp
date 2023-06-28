#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(std::string arg) {
	type = arg;
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() {
	return (type);
}

void Weapon::setType(std::string arg) {
	type = arg;
}