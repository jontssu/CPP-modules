#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: _target(target), _signGrade(145), _execGrade(137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref)
: _target(ref._target), _signGrade(145), _execGrade(137) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref) {
	if (this != &ref) {
		_target = ref._target;
		_signGrade = 145;
		_execGrade = 137;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}