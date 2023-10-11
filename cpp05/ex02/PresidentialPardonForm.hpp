#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>

class PresidentialPardonForm {
	private:
		std::string _target;
		int			_signGrade;
		int			_execGrade;

		void finalExecution() const;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &ref);
		PresidentialPardonForm(PresidentialPardonForm const &ref);
		~PresidentialPardonForm();
};

#endif