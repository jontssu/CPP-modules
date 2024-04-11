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
	int i = 0;
	int distance = 0;
	int tmp;

	while ((int)vec.size() - distance >= stride * 2) {
	// std::cout << "pair: " << vec[i] << " & " << vec[i + stride] << '\n'; 
		if (vec[i] < vec[i + stride]) {
			tmp = vec[i];
			vec[i] = vec[i + stride];
			vec[i + stride] = tmp;
		}
		distance += stride * 2;
		i += stride * 2;
	}

	// std::cout << '\n';
	// for (auto x : vec) {
	// 	std::cout << x << ' ';
	// }
	// std::cout << '\n';
	// std::cout << '\n';

	if ((int)vec.size() >= stride * 4) {
		executeVector(stride * 2);
	}

	std::list<int> main;
	std::list<int> pend;

	i = 0;
	auto it = vec.begin();
	for (int distance = 0; (int)vec.size() - distance >= stride * 2;) {
		main.push_back(*it);
		pend.push_back(*(it + stride));
		it += stride * 2;
		distance += stride * 2;
	}

	std::cout << "\nmain\n";
	for (auto x : main) {
		std::cout << x << ' ';
	}
	std::cout << "\npend\n";
	for (auto x : pend) {
		std::cout << x << ' ';
	}
	std::cout << "\n\n";
}