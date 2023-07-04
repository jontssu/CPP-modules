#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
}

HumanB::~HumanB() {
}

void HumanB::attack() {
	std::cout << _name << " attacks with their ";
	std::cout <<  _weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}