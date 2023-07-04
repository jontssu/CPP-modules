#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _weapon(type) {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << _name << " attacks with their ";
	std::cout <<  _weapon.getType() << '\n';
}