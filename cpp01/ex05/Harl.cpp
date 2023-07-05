#include "Harl.hpp"

Harl::Harl() {
};

Harl::~Harl() {
};

void Harl::complain(std::string level) {
	void (Harl::*p[]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	level == "DEBUG" ? (this->*p[0]) () :
	(level == "INFO" ? (this->*p[1]) () :
	(level == "WARNING" ? (this->*p[2]) () :
	(level == "ERROR" ? (this->*p[3]) () :
	void())));
}

void Harl::debug() {
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-special- ketchup burger.";
	std::cout << " I really do!" << std::endl;
};

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you";
	std::cout << " started working here since last month." << std::endl;
};

void Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
};