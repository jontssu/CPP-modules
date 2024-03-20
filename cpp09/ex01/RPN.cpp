#include "RPN.hpp"

// Rpn();

Rpn::Rpn(std::string const &str) {
	std::stack<int> stack;
	std::stringstream ss;
	std::string c;

	ss << str;

	while (!ss.eof()) {
		ss >> c;
		if (c.size() != 1 || !std::isdigit(c.front()) || )
			throw("Invalid argument format");
		std::cout << c << '\n';
	} 
}

// Rpn(Rpn const &other);
// Rpn& operator=(Rpn const &other);
// ~Rpn();