#include "PmergeME.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Error: not enough arguments\n";
		return -1;
	}

	PmergeME p;
	try
	{
		p = PmergeME(argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
	

	p.printUnsorted();
	p.sortAndPrint();

	p.executeVector(1);
	p.printVec();

	p.executeDeque(1);
	p.printDeq();

	return 0;
}