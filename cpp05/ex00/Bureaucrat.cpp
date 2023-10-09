#include "Bureaucrat.hpp"

std::string Bureaucrat::getName() {
	return (_name);
}

int Bureaucrat::getGrade() {
	return (_grade);
}

void Bureaucrat::incrementGrade() {
	_grade -= 1;
}

void Bureaucrat::decrementGrade() {
	_grade += 1;
}

Bureaucrat::Bureaucrat() : _name("Nameless") {
}

Bureaucrat::Bureaucrat(std::string name) : _name(name) {
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref) {
	_name = ref._name;
	_grade = ref._grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &ref) {
	if (this != &ref) {
		_name = ref._name;
		_grade = ref._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
}