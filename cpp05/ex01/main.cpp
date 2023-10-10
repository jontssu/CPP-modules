#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
	Bureaucrat a("a", 1);
	Bureaucrat b("b", 50);
	Bureaucrat c("c", 150);
	Form x("x", 1, 5);
	Form y("y", 40, 75);
	Form z("z", 130, 150);

	a.signForm(x);
	a.signForm(y);
	a.signForm(z);

	std::cout << "\n\n";

	b.signForm(x);
	b.signForm(y);
	b.signForm(z);

	std::cout << "\n\n";

	c.signForm(x);
	c.signForm(y);
	c.signForm(z);
	return (0);
}