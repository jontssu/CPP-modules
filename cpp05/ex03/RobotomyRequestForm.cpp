#include "RobotomyRequestForm.hpp"
#include <iostream>

void RobotomyRequestForm::finalExecution() const {
	std::cout << "*Some drilling noises*\n";
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized\n";
	else
		std::cout << _target << " has been unsuccessfully robotomized\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref)
: AForm("RobotomyRequestForm", 72, 45), _target(ref._target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {}