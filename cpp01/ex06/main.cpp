#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Invalid amount of arguments" << std::endl;
		return (1);
	}
	Harl harl;
	harl.complain("ERROR");
	std::cout << "---------------\n";
	harl.complain("WARNING");
	std::cout << "---------------\n";
	harl.complain("INFO");
	std::cout << "---------------\n";
	harl.complain("DEBUG");
	std::cout << "---------------\n";
	harl.complain("");
	std::cout << "---------------\n";
	harl.complain("sheesh");
	std::cout << "---------------\n";
	harl.complain("abc");
	std::cout << "---------------\n";
	harl.complain(argv[1]);
	return (0);
}