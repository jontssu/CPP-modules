#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>


int main() {
	Intern i;
	AForm* f;

	f = i.makeForm("ShrubberyCreationForm", "You");
	std::cout << *f << '\n';

	delete f;

	f = i.makeForm("RobotomyRequestForm", "Me");
	std::cout << *f << '\n';

	delete f;

	f = i.makeForm("PresidentialPardonForm", "Your mom");
	std::cout << *f << '\n';

	delete f;

	f = i.makeForm("Nonsense", "No one");

	return (0);
}