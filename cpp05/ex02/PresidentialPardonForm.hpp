#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;

		void finalExecution() const;
		PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm const &ref);
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &ref);
		~PresidentialPardonForm();
};

#endif