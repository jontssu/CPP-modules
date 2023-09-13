#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
	std::string _name;

	public:
	void whoAmI();

	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
};

#endif