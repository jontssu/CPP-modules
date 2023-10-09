#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Bureaucrat {
	private:
		const std::string _name;
		int				  _grade;

		class Exception : std::exception {

		}; 

	public:
		std::string getName();
		int			getGrade();
		void		incrementGrade();
		void		decrementGrade();

		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(Bureaucrat const &ref);
		Bureaucrat& operator=(Bureaucrat const &ref);
		~Bureaucrat();
};

#endif