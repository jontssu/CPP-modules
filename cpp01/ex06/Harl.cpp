#include "Harl.hpp"

Harl::Harl() {
};

Harl::~Harl() {
};

void Harl::complain(std::string level) {
	int nb = level == "DEBUG" ? 2 : 
	(level == "INFO" ? 3 : 
	(level == "WARNING" ? 4 : 
	(level == "ERROR" ? 5 : 1)));
	switch (nb) {
		case 1:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		case 2:
			this->debug();
		case 3:
			this->info();
		case 4:
			this->warning();
		case 5:
			this->error();
	}
}

void Harl::debug() {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-special- ketchup burger.\n";
	std::cout << "I really do!\n" << std::endl;
};

void Harl::info() {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger!\n";
	std::cout << "If you did, I wouldn’t be asking for more!\n" << std::endl;
};

void Harl::warning() {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you";
	std::cout << " started working here since last month.\n" << std::endl;
};

void Harl::error() {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << std::endl;
};