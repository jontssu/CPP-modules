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

template<typename T>
T get_it(T main_it, unsigned int size) {
	while (size) {
		main_it++;
		size--;
	}
	return (main_it);
}

void PmergeME::executeVector(int stride) {
	int i = 0;
	int distance = 0;
	int tmp;

	while ((int)vec.size() - distance >= stride * 2) {
	// std::cout << "pair: " << vec[i] << " & " << vec[i + stride] << '\n'; 
		if (vec[i] < vec[i + stride]) {
			for (int x = stride; x > 0; x--) {
				tmp = vec[i];
				vec[i] = vec[i + stride];
				vec[i + stride] = tmp;
				i++;
			}
			i -= stride;
		}
		distance += stride * 2;
		i += stride * 2;
	}

	std::cout << '\n';
	for (auto x : vec) {
		std::cout << x << ' ';
	}
	std::cout << '\n';

	if ((int)vec.size() >= stride * 4) {
		executeVector(stride * 2);
	}

	list_it main;
	list_it pend;

	auto it = vec.begin();;
	for (; it + stride < vec.end(); it+= stride * 2) {
		main.push_back(it);
		pend.push_back(it + stride);
	}
	if (it < vec.end() && it + stride - 1 < vec.end() ){
		pend.push_back(it);
	}

	std::cout << "\nmain before anything: ";
	for (auto x : main) {
		std::cout << *x << ' ';
	}
	std::cout << "\npend before anything: ";
	for (auto x : pend) {
		std::cout << *x << ' ';
	}

	main.push_front(pend.front());
	pend.pop_front();

	std::cout << "\nmain: ";
	for (auto x : main) {
		std::cout << *x << ' ';
	}
	std::cout << "\npend: ";
	for (auto x : pend) {
		std::cout << *x << ' ';
	}

	std::cout << '\n';

	static const std::uint_fast64_t jacobsthal_diff[] = {
		2u, 2u, 6u, 10u, 22u, 42u, 86u, 170u, 342u, 682u, 1366u,
		2730u, 5462u, 10922u, 21846u, 43690u, 87382u, 174762u, 349526u, 699050u,
		1398102u, 2796202u, 5592406u, 11184810u, 22369622u, 44739242u, 89478486u,
		178956970u, 357913942u, 715827882u, 1431655766u, 2863311530u, 5726623062u,
		11453246122u, 22906492246u, 45812984490u, 91625968982u, 183251937962u,
		366503875926u, 733007751850u, 1466015503702u, 2932031007402u, 5864062014806u,
		11728124029610u, 23456248059222u, 46912496118442u, 93824992236886u, 187649984473770u,
		375299968947542u, 750599937895082u, 1501199875790166u, 3002399751580330u,
		6004799503160662u, 12009599006321322u, 24019198012642646u, 48038396025285290u,
		96076792050570582u, 192153584101141162u, 384307168202282326u, 768614336404564650u,
		1537228672809129302u, 3074457345618258602u, 6148914691236517206u
	};
	
	list_it_it main_it;

	for (auto it = main.begin(); it != main.end(); it ++) {
		main_it.push_back(it);
	}
	main_it.pop_front();
	main_it.pop_front();

	int set = 0;
	int size = pend.size();
	int total_dist = 0;

	for (int i = 0; size > 0; i++) {
		set = jacobsthal_diff[i];
		if (set > size)
			set = size;
		while (set) {
			list_it::iterator lowest = std::lower_bound(main.begin(),
			*(get_it(main_it.begin(), set + total_dist - 1)),
			*(get_it(pend.begin(), set + total_dist - 1)),
			[] (vec_int::iterator a, vec_int::iterator b) {return *a > *b;});
			//std::cout << "lowest: " << **lowest << '\n';
			// std::cout << std::distance(main.begin(), lowest) << '\n';
			main.insert(lowest, *(get_it(pend.begin(), set + total_dist - 1)));
			set--;
		}
		size -= jacobsthal_diff[i];
		total_dist += jacobsthal_diff[i];
	}
	std::cout << "\nmain after: ";
	for (auto x : main) {
		std::cout << *x << ' ';
	}
	std::cout << "\n";

	std::vector<int> updated_vec;
	for (auto x : main) {
		i = 0;
		size = stride;
		while (size) {
			updated_vec.push_back(*(x + i));
			main.pop_back();
			size--;
			i++;
		}	
	}
	vec = updated_vec;
}