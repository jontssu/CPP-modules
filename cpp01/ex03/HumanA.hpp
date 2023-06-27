#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
	public:
	void attack();
	~HumanA();
	HumanA();

	private:
	std::string name;
};

#endif