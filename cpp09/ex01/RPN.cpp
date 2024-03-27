#include "RPN.hpp"

// Rpn();

void do_op(std::stack<int> &stack, char c) {
	int top = stack.top();
	stack.pop();
	int second = stack.top();
	stack.pop();

	if (c == '+') {
		top = second + top;
		stack.push(top);
	}
	else if (c == '-') {
		top = second - top;
		stack.push(top);
	}
	else if (c == '/') {
		top = second / top;
		stack.push(top);
	}
	else if (c == '*') {
		top = second * top;
		stack.push(top);
	}
}

Rpn::Rpn(std::string const &str) {
	std::stack<int> stack;
	std::stringstream ss;
	std::string c;

	ss << str;

	while (!ss.eof()) {
		ss >> c;
		if (c.size() != 1 
		|| (!std::isdigit(c.front()) 
			&& (c.front() != '+' 
			&&  c.front() != '-' 
			&&  c.front() != '/' 
			&&  c.front() != '*')))
				throw("Invalid argument format");
		if (c.front() == '+' 
		||  c.front() == '-' 
		||  c.front() == '/' 
		||  c.front() == '*') {
			if (stack.size() < 2)
				throw("Invalid argument format");
			do_op(stack, c.front());
			continue;
		}
		stack.push(std::stoi(c));
	} 

	while (stack.size() > 0) {
		std::cout << stack.top() << '\n';
		stack.pop();
	}
}

// Rpn(Rpn const &other);
// Rpn& operator=(Rpn const &other);
// ~Rpn();