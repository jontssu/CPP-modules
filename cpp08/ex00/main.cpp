#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
	int arr[] = {11, 22, 33, 44, 55};
	std::vector<int> v(arr, arr + (sizeof(arr) / sizeof(*arr)));

	int arr2[] = {111, 222, 333, 444, 555};
	const std::vector<int> v2(arr2, arr2 + (sizeof(arr) / sizeof(*arr)));

	std::vector<int>::iterator tmp = easyfind(v, 33);

	if (tmp != v.end()) {
		std::cout << "SUCCESS\n";
	}
	else
		std::cout << "FAILURE\n";

	std::cout << "\n";

	std::vector<int>::const_iterator tmp2 = easyfind(v2, 400);
	// for (std::vector<int>::const_iterator it = v2.begin(); it != v2.end(); it++) {
	// 	std::cout << *it << '\n';
	// }
	// std::cout << "tmp2 is: " << *tmp2 << '\n';
	// std::cout << "v2end: " << *(v2.end()) << '\n';
	if (tmp2 != v2.end()) {
		std::cout << "SUCCESS\n";
	}
	else
		std::cout << "FAILURE\n";
	return (0);
}