#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid amount of arguments\n";
		return -1;
	}
	try {
		Rpn rpn = Rpn(argv[1]);
		(void)rpn;
	} catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << '\n';
	}
	return 0;
}