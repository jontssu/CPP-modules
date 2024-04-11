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
	std::list<int> main;
	std::list<int> pend;
	int i = 0;
	int distance = 0;
	int tmp;
	while ((int)vec.size() - distance >= stride * 2) {
	std::cout << "pair: " << vec[i] << " & " << vec[i + stride] << '\n'; 
		if (vec[i] < vec[i + stride]) {
			tmp = vec[i];
			vec[i] = vec[i + stride];
			vec[i + stride] = tmp;
		}
		distance += stride * 2;
		i += stride * 2;
	}
	std::cout << '\n';
	for (auto x : vec) {
		std::cout << x << ' ';
	}
	std::cout << '\n';
	std::cout << '\n';
	if ((int)vec.size() >= stride * 4) {
		executeVector(stride * 2);
	}
}