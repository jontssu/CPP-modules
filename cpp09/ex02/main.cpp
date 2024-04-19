#include "PmergeME.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Error: not enough arguments\n";
		return -1;
	}
	PmergeME p = PmergeME(argv);

	p.printUnsorted();
	// p.sortAndPrint();

	p.executeVector(1);
	p.printVec();

	// p.executeDeque(1);
	// p.printDeq();

	return 0;
}