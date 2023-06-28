#include "HumanA.hpp"

HumanA::HumanA() {
}

HumanA::HumanA(std::string arg, Weapon type) {
	name = arg;
	weapon = type;
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << getName() << " attacks with their ";
	std::cout <<  weapon.getType() << '\n';
}

std::string HumanA::getName() {
	return (name);
}

void HumanA::setWeapon(Weapon newWeapon) {
	std::cout << newWeapon.getType() << '\n';
	weapon = newWeapon;
}