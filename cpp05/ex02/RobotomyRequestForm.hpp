#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;

		void finalExecution() const;
		RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const &ref);
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &ref);
		~RobotomyRequestForm();
};

#endif