#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	private:

	public:
	void makeSound() const;

	Dog();
	Dog(Dog const &ref);
	Dog& operator=(Dog const &ref);
	~Dog();
};

#endif