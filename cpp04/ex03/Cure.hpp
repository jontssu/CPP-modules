#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : AMateria {
	private:

	public:
		Cure* clone() const;
		void use(ICharacter&);

		Cure();
		Cure(Cure const &ref);
		Cure& operator=(Cure const &ref);
		~Cure();
};

#endif