#include "PmergeME.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cerr << "Not enough arguments\n";
		return -1;
	}
	PmergeME p = PmergeME(argv);
	p.executeVector(1);
	return 0;
}