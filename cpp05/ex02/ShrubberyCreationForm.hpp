#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>

class ShrubberyCreationForm {
	private:
		std::string _target;
		int			_signGrade;
		int			_execGrade;

		void finalExecution() const;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &ref);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &ref);
		~ShrubberyCreationForm();
};

#endif