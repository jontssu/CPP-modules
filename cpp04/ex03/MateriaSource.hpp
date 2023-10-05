#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _memory[4];

	public:
		void	  learnMateria(AMateria*);
		AMateria* createMateria(std:: string const & type);
		AMateria* getMateriaIdx(int idx);

		MateriaSource();
		MateriaSource(MateriaSource const &ref);
		MateriaSource& operator=(MateriaSource const &ref);
		~MateriaSource();	
};

#endif