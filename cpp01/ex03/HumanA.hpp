#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
	public:
	Weapon weapon;
	void attack();
	std::string getName();
	void setWeapon(Weapon newWeapon);
	HumanA();
	HumanA(std::string arg, Weapon type);
	~HumanA();

	private:
	std::string name;
};

#endif