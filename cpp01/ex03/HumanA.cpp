#include "HumanA.hpp"

HumanA::HumanA() : _name("Unnamed"){
}

HumanA::HumanA(std::string name, Weapon &type) : _name(name), weapon(type) {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << getName() << " attacks with their ";
	std::cout <<  weapon.getType() << '\n';
}

std::string HumanA::getName() {
	return (_name);
}

void HumanA::setWeapon(Weapon newWeapon) {
	std::cout << newWeapon.getType() << '\n';
	weapon = newWeapon;
}