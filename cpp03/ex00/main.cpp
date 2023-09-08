#include "ClapTrap.hpp"
#include <iostream>

int main() {
	ClapTrap x("x");
	ClapTrap y("y");

	x.attack("y");
	y.takeDamage(0);
	y.beRepaired(1);
	y.beRepaired(0);
	y.beRepaired(0);
	y.beRepaired(0);
	y.beRepaired(0);
	y.beRepaired(0);
	y.beRepaired(0);
	y.beRepaired(0);
	y.beRepaired(0);
	y.beRepaired(0);
	y.attack("x");
	std::cout << "x falls of a cliff\n";
	x.takeDamage(10);
	x.beRepaired(1);
	x.takeDamage(0);
	return (0);
}