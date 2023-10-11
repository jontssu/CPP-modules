#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;

		void finalExecution() const;
		ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &ref);
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &ref);
		~ShrubberyCreationForm();
};

#endif