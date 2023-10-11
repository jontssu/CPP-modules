#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef AForm* (*formFunction)(std::string target);

AForm* makeShrubberyCreationForm(std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm* makeRobotomyRequestForm(std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm* makePresidentialPardonForm(std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string name, std::string target) {
	std::string array[] = {"ShrubberyCreationForm",
							"RobotomyRequestForm",
							"PresidentialPardonForm"};
	formFunction f[] = {makeShrubberyCreationForm,
						makeRobotomyRequestForm,
						makePresidentialPardonForm};
	for (int i = 0; i < 3; i++) {
		if (name == array[i]) {
			std::cout << "Intern creates " << name << '\n';
			return (f[i](target));
		}
	}
	std::cout << "Intern didn't find a matching name\n";
}


Intern::Intern() {}

Intern::Intern(Intern const &ref)  {
}

Intern& Intern::operator=(Intern const &ref) {
}

Intern::~Intern() {}