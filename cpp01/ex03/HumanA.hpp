#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
	private:
	std::string _name;

	public:
	HumanA();
	HumanA(std::string name, Weapon &type);
	~HumanA();

	Weapon& weapon;
	std::string getName();

	void attack();
	void setWeapon(Weapon newWeapon);
};

#endif