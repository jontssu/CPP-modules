#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "TrashCan.hpp"

class Character : public ICharacter {
	private:
		static TrashCan _trashcan;
		std::string _name;
		AMateria* 	_inventory[4];

	public:
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character();
		Character(std::string name);
		Character(Character const &ref);
		Character& operator=(Character const &ref);
		~Character();
};

#endif