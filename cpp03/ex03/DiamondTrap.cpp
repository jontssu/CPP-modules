#include "DiamondTrap.hpp"
#include <iostream>

void DiamondTrap::whoAmI() {
	std::cout << "My DiamondTrap name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ScavTrap::_name << std::endl;
}

DiamondTrap::DiamondTrap() : _name("Nameless") {
	std::cout << "DiamondTrap default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	std::cout << "DiamondTrap name constructor has been called" << std::endl;
	ScavTrap::_name = name + "_clap_name";
	ScavTrap::_energyPoints = 50; 
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor has been called" << std::endl;
}