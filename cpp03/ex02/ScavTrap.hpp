#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:

	public:
	void attack(const std::string& target);
	void guardGate();

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &ref);
	ScavTrap& operator=(ScavTrap const &ref);
	~ScavTrap();
};

#endif