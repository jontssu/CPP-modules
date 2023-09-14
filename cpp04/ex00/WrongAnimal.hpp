#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	private:

	protected:
	std::string type;

	public:
	virtual void makeSound() const;
	std::string	getType() const;

	WrongAnimal();
	WrongAnimal(WrongAnimal const &ref);
	WrongAnimal& operator=(WrongAnimal const &ref);
	~WrongAnimal();

};

#endif