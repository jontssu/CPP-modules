#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:

	public:
	void highFivesGuys(void);

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &ref);
	FragTrap& operator=(FragTrap const &ref);
	~FragTrap();
};

#endif