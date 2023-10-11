#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern {
	private:

	public:
		AForm* makeForm(std::string name, std::string target);

		Intern();
		Intern& operator=(Intern const &ref);
		Intern(Intern const &ref);
		~Intern();
};

#endif