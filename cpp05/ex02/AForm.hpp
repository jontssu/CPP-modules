#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& os, const class AForm& ref);

class AForm {
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
		virtual void finalExecution() const;

		AForm();
		AForm& operator=(AForm const &ref);
	public:
		void		execute(Bureaucrat const & executor) const;
		void		beSigned(Bureaucrat& ref);
		std::string	getName() const;
		bool		getIsSigned() const;
		int 		getSignGrade() const;
		int			getExecuteGrade() const;

		AForm(std::string name, int signGrade, int executeGrade);
		AForm(AForm const &ref);
		~AForm();
};

#endif