#include "iter.hpp"
#include <string>
#include <iostream>

void f(std::string& x) {
	x[0] = '1';
}

void f2(int& x) {
	 x += 10;
}

int main()
{
	std::string j[] = {"hello", "world", "isover"};
	iter(j, 3, f); 
	std::cout << j[0] << '\n' << j[1]  << '\n' << j[2] << '\n';

	int x[] = {1, 2, 3, 4};
	iter(x, 4, f2);
	std::cout << x[0] << '\n' << x[1]  << '\n' << x[2] << '\n' << x[3] << '\n';
	return 0;
}
