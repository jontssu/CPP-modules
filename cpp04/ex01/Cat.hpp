#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {
	private:
	Brain* _brain;

	public:
	void makeSound() const;

	Cat();
	Cat(Cat const &ref);
	Cat& operator=(Cat const &ref);
	~Cat();
};

#endif