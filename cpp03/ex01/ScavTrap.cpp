#include "ScavTrap.hpp"
#include <iostream>

void ScavTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
	std::cout << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_attackDamage << " points of damage! CRITICAL HIT!" << std::endl; 
	this->_energyPoints -= 1; 
	}
}

void ScavTrap::guardGate() {
	std::cout << _name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap() {
	_name = "nameless";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default Constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Name Constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor has been called" << std::endl;
}