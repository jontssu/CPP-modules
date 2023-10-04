#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	private:

	public:
		Ice* clone() const;
		void use(ICharacter&);
		
		Ice();
		Ice(Ice const &ref);
		Ice& operator=(Ice const &ref);
		~Ice();	
};

#endif