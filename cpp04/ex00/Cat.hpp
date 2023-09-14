#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	private:

	public:
	void makeSound() const;

	Cat();
	Cat(Cat const &ref);
	Cat& operator=(Cat const &ref);
	~Cat();
};

#endif