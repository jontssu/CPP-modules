#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	try {
	Bureaucrat a("a", 149);
	std::cout << a;
	a.decrementGrade();
	a.decrementGrade();
	a.decrementGrade();
	}
	catch (std::exception& e) {
		std::cout << "LOL FAILED " << e.what() << std::endl;
	}
	try {
	Bureaucrat b("b", 220);
	std::cout << b;
	}
	catch (std::exception& e) {
		std::cout << "LOL FAILED " << e.what() << std::endl;
	}
	try {
	Bureaucrat c("c", -1);
	std::cout << c;
	}
	catch (std::exception& e) {
		std::cout <<  "LOL FAILED " << e.what() << std::endl;
	}
	try {
	Bureaucrat d("d", 1);
	std::cout << d;
	d.incrementGrade();
	d.incrementGrade();
	d.incrementGrade();
	}
	catch (std::exception& e) {
		std::cout << "LOL FAILED " << e.what() << std::endl;
	}
	return (0);
}