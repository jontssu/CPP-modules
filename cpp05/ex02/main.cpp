#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>


int main() {
	ShrubberyCreationForm a1("a1");
	RobotomyRequestForm a2("a2");
	PresidentialPardonForm a3("a3");

	ShrubberyCreationForm b1("b1");
	RobotomyRequestForm b2("b2");
	PresidentialPardonForm b3("b3");

	ShrubberyCreationForm c1("c1");
	RobotomyRequestForm c2("c2");
	PresidentialPardonForm c3("c3");

	Bureaucrat x("x", 1);
	Bureaucrat y("y", 75);
	Bureaucrat z("x", 150);

	std::cout << "\nCreated all Forms and Bureaucrats\n\n";
	std::cout << "\nNow X executing A Forms\n\n";

	x.executeForm(a1);
	x.executeForm(a2);
	x.executeForm(a3);

	std::cout << "\nNow Y executing B Forms\n\n";

	y.executeForm(b1);
	y.executeForm(b2);
	y.executeForm(b3);

	std::cout << "\nNow Z executing C Forms\n\n";

	z.executeForm(c1);
	z.executeForm(c2);
	z.executeForm(c3);

	std::cout << "\nNow signing everything\n\n";

	x.signForm(a1);
	x.signForm(a2);
	x.signForm(a3);

	std::cout << "\n";

	y.signForm(b1);
	y.signForm(b2);
	y.signForm(b3);

	std::cout << "\n";

	z.signForm(c1);
	z.signForm(c2);
	z.signForm(c3);

	std::cout << "\nNow X executing A Forms\n\n";

	x.executeForm(a1);
	x.executeForm(a2);
	x.executeForm(a3);

	std::cout << "\nNow Y executing B Forms\n\n";

	y.executeForm(b1);
	y.executeForm(b2);
	y.executeForm(b3);

	std::cout << "\nNow Z executing C Forms\n\n";

	z.executeForm(c1);
	z.executeForm(c2);
	z.executeForm(c3);
	return (0);
}