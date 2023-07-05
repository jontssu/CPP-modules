#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Invalid amount of arguments" << std::endl;
	}
	Harl harl = Harl();
	harl.complain(argv[1]);
	return (0);
}