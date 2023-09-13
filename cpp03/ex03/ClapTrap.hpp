#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	private:

	protected:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	public:
	virtual void attack(const std::string& target);
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