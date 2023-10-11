#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade Too High");
}	

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade Too Low");
}	

void	AForm::execute(Bureaucrat const & executor) const {
	if (_isSigned == false || executor.getGrade() > _executeGrade)
		throw(GradeTooLowException());
	
}

void AForm::beSigned(Bureaucrat& ref) {
	if (ref.getGrade() > _signGrade)
		throw(GradeTooLowException());
	_isSigned = true;
}

std::string AForm::getName() const {
	return (_name);
}

bool AForm::getIsSigned() const {
	return (_isSigned);
}

int AForm::getSignGrade() const {
	return (_signGrade);
}

int AForm::getExecuteGrade() const {
	return (_executeGrade);
}

AForm::AForm(std::string name, int signGrade, int executeGrade)
: _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {
}

AForm::AForm(AForm const &ref) 
: _name(ref._name), _isSigned(ref._isSigned), _signGrade(ref._signGrade), _executeGrade(ref._executeGrade) {
}

AForm::~AForm() {}

std::ostream&	operator<<(std::ostream& os, const AForm& ref) {
	os << ref.getName() << " AForm is signed: " << ref.getIsSigned() << " , Sign Grade: " << ref.getSignGrade() << " , Execute Grade: " << ref.getExecuteGrade() << std::endl;
	return (os);
}