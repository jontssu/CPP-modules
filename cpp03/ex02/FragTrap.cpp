#include "FragTrap.hpp"
#include <iostream>

void FragTrap::highFivesGuys(void) {
	std::cout << this->_name << " asks for highfives" << std::endl;
}

FragTrap::FragTrap () {
	std::cout << "FragTrap default constructor has been called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap (std::string name) {
	std::cout << "FragTrap name constructor has been called" << std::endl;
	_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor has been called" << std::endl;
}