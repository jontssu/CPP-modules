#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Form;

#include <string>
#include <exception>
#include <iostream>

std::ostream&	operator<<(std::ostream& os, const class Bureaucrat& ref);

class Bureaucrat {
	private:
		const std::string _name;
		int				  _grade;

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();	
		}; 

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();	
		}; 

		Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const &ref);

	public:
		std::string getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form& ref);

		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &ref);
		~Bureaucrat();
};

#endif