#include "ClapTrap.hpp"
#include <iostream>

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << this->_name << " attacks " << target << ", causing ";
		std::cout << this->_attackDamage << " points of damage!" << std::endl; 
		this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		std::cout << this->_name << " has taken " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << this->_name << " repairs itself for " << amount <<  " hitpoints!" << std::endl;
		this->_energyPoints -= 1;
	}
}

std::string ClapTrap::getName() {
	return (_name);
}

ClapTrap::ClapTrap() : _name("Nameless"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Default Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Name Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ref) {
	std::cout << "ClapTrap Copy Constructor has been called" << std::endl;
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &ref) {
	std::cout << "ClapTrap Copy Assignment Operator has been called" << std::endl;
	if (this != &ref) {
		this->_name = ref._name;
		this->_hitPoints = ref._hitPoints;
		this->_energyPoints = ref._energyPoints;
		this->_attackDamage = ref._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor has been called" << std::endl;
}