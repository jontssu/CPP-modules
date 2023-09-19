#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
	Brain* _brain;

	public:
	void makeSound() const;

	Dog();
	Dog(Dog const &ref);
	Dog& operator=(Dog const &ref);
	~Dog();
};

#endif