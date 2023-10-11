#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>

class RobotomyRequestForm {
	private:
		std::string _target;
		int			_signGrade;
		int			_execGrade;

		void finalExecution() const;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &ref);
		RobotomyRequestForm(RobotomyRequestForm const &ref);
		~RobotomyRequestForm();
};

#endif