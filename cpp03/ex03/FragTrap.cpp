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

FragTrap::FragTrap(FragTrap const &ref) {
	std::cout << "FragTrap Copy Constructor has been called" << std::endl;
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
}

FragTrap& FragTrap::operator=(FragTrap const &ref) {
	std::cout << "FragTrap Copy Assignment Operator has been called" << std::endl;
	if (this != &ref) {
		this->_name = ref._name;
		this->_hitPoints = ref._hitPoints;
		this->_energyPoints = ref._energyPoints;
		this->_attackDamage = ref._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor has been called" << std::endl;
}