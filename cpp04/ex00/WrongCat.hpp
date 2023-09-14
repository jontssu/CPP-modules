#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:

	public:
	void makeSound() const;

	WrongCat();
	WrongCat(WrongCat const &ref);
	WrongCat& operator=(WrongCat const &ref);
	~WrongCat();
};

#endif