#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade Too High");
}	

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade Too Low");
}	

void Form::beSigned(Bureaucrat& ref) {
	if (ref.getGrade() > _signGrade)
		throw(GradeTooLowException());
	_isSigned = true;
}

std::string Form::getName() const {
	return (_name);
}

bool Form::getIsSigned() const {
	return (_isSigned);
}

int Form::getSignGrade() const {
	return (_signGrade);
}

int Form::getExecuteGrade() const {
	return (_executeGrade);
}

Form::Form(std::string name, int signGrade, int executeGrade)
: _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {
}

Form::Form(Form const &ref) 
: _name(ref._name), _isSigned(ref._isSigned), _signGrade(ref._signGrade), _executeGrade(ref._executeGrade) {
}

Form::~Form() {}

std::ostream&	operator<<(std::ostream& os, const Form& ref) {
	os << ref.getName() << " Form is signed: " << ref.getIsSigned() << " , Sign Grade: " << ref.getSignGrade() << " , Execute Grade: " << ref.getExecuteGrade() << std::endl;
	return (os);
}