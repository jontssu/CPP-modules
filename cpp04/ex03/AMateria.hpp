#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria {
	private:

	protected:

	public:
		AMateria(std::string const & type);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		AMateria();
		AMateria(AMateria const &ref);
		AMateria& operator=(AMateria const &ref);
		~AMateria();
};

#endif