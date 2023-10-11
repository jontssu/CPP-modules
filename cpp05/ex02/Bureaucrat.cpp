#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Too High");
}	

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Too Low");
}	

void	Bureaucrat::executeForm(AForm const & form) const {
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << '\n';
	}
	catch (std::exception &e) {
		std::cout << "Lol failed\n";
	}
}

std::string Bureaucrat::getName() const {
	return (_name);
}

int Bureaucrat::getGrade() const {
	return (_grade);
}

void Bureaucrat::incrementGrade() {
	if ((_grade - 1) < 1) {
		throw(GradeTooHighException());
	}
	_grade -= 1;
}

void Bureaucrat::decrementGrade() {
	if ((_grade + 1) > 150) {
		throw(GradeTooLowException());
	}
	_grade += 1;
}

void	Bureaucrat::signForm(AForm& ref) {
	try {
		ref.beSigned(*this);
		std::cout << _name << " signed " << ref.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << _name << " couldn't sign " << ref.getName() << " because " << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw(GradeTooHighException());
	else if (grade > 150)
		throw(GradeTooLowException());
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref) : _name(ref._name), _grade(ref._grade) {
}

Bureaucrat::~Bureaucrat() {
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref) {
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
	return (os);
}