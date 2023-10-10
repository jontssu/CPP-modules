#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& os, const class Form& ref);

class Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_executeGrade;

		class GradeTooHighException : public std::exception {
			const char* what() const throw();	
		};

		class GradeTooLowException : public std::exception {
			const char* what() const throw();	
		};

		Form();
		Form& operator=(Form const &ref);
	public:
		void		beSigned(Bureaucrat& ref);
		std::string	getName() const;
		bool		getIsSigned() const;
		int 		getSignGrade() const;
		int			getExecuteGrade() const;

		Form(std::string name, int signGrade, int executeGrade);
		Form(Form const &ref);
		~Form();
};

#endif