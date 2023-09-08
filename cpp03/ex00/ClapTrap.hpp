#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	private:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName();

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &ref);
	ClapTrap& operator=(ClapTrap const &ref);
	~ClapTrap();
};

#endif