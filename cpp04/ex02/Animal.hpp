#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
	private:

	protected:
	std::string type;

	public:
	virtual void makeSound() const = 0;
	std::string getType() const;

	Animal();
	Animal(Animal const &ref);
	Animal& operator=(Animal const &ref);
	virtual ~Animal();
};

#endif