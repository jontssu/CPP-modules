#include "PresidentialPardonForm.hpp"
#include <iostream>

void PresidentialPardonForm::finalExecution() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref)
: AForm("PresidentialPardonForm", 25, 5), _target(ref._target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {}