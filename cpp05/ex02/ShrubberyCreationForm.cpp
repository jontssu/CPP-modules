#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

void ShrubberyCreationForm::finalExecution() const {
	std::ofstream outputFile((_target + "_shrubbery").c_str());
	outputFile << "TREE";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref)
: AForm("ShrubberyCreationForm", 145, 137), _target(ref._target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}