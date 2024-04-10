#include "PmergeME.hpp"

PmergeME::PmergeME(char **argv) {
	if (argv[2] == NULL) {
		std::string str;
		std::stringstream ss(argv[1]);
		while (std::getline(ss, str, ' ')) {
			vec.push_back(std::stoi(str));
		}
	} else {
		for (int i = 1; argv[i]; i++) {
			deq.push_back(std::stoi(argv[i]));
		}
	}
}

void PmergeME::executeVector(int stride) {
	
}