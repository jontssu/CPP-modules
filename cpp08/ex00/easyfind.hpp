#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
void easyfind(T type, int n) {
	try {
		for(int i = 0; type[i]; i++) {
			if (type[i] == n)
				throw();
		}
		std::cout << "SUCCESS\n";
	} catch (...) {
		std::cout << "FAILURE\n";
	}	
}

#endif