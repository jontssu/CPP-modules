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

	const std::chrono::time_point<std::chrono::system_clock> now =
        std::chrono::system_clock::now();

	p.executeVector(1);
	// p.printVec();

	const std::chrono::time_point<std::chrono::system_clock> end =
        std::chrono::system_clock::now();

	p.executeDeque(1);
	// p.printDeq();

	const std::chrono::time_point<std::chrono::system_clock> end2 =
        std::chrono::system_clock::now();

	std::cout << "Time to process a range of " << p.get_elements() << " elements with std::vector : " << (end.time_since_epoch().count() - now.time_since_epoch().count()) / 1000 << '.' <<  (end.time_since_epoch().count() - now.time_since_epoch().count()) % 1000 << " ms\n";
	std::cout << "Time to process a range of " << p.get_elements() << " elements with std::vector : " << (end2.time_since_epoch().count() - end.time_since_epoch().count()) / 1000 << '.' <<  (end2.time_since_epoch().count() - end.time_since_epoch().count()) % 1000 << " ms\n";

	return 0;
}