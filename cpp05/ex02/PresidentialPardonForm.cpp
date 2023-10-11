#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: _target(target), _signGrade(25), _execGrade(5) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref)
: _target(ref._target), _signGrade(25), _execGrade(5) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &ref) {
	if (this != &ref) {
		_target = ref._target;
		_signGrade = 25;
		_execGrade = 5;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}