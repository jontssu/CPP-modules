#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

void ShrubberyCreationForm::finalExecution() const {
	std::ofstream outputFile((_target + "_shrubbery").c_str());
	for (int x = 0; x < 5; x++) {
		for (int i = 1; i <= 10; ++i) {
			for (int j = 0; j < 10 - i; ++j) {
				outputFile << " ";
			}

			for (int j = 0; j < 2 * i - 1; ++j) {
				outputFile << "*";
			}

			outputFile << std::endl;
		}

		for (int i = 0; i < 10 - 1; ++i) {
			outputFile << " ";
		}
		outputFile << "|" << std::endl;
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref)
: AForm("ShrubberyCreationForm", 145, 137), _target(ref._target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}