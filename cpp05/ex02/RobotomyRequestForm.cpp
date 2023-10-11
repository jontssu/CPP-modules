#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: _target(target), _signGrade(72), _execGrade(45) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref)
: _target(ref._target), _signGrade(72), _execGrade(45) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &ref) {
	if (this != &ref) {
		_target = ref._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}