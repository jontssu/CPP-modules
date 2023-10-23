#include "iter.hpp"
#include <string>
#include <iostream>

class Awesome {
	public:
		Awesome() : _n(42) { return; }
		int get() const { return this->_n; }
	private:
		int _n;
};

std::ostream& operator<<(std::ostream& os, Awesome const& rhs) { os << rhs.get(); return os;}

template<typename T>
void print(T const& x) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print<int>);
	iter(tab2, 5, print<Awesome>);
	return (0);
}

// void f(std::string& x) {
// 	x[0] = '1';
// }

// void f2(int& x) {
// 	 x += 10;
// }

// int main()
// {
// 	std::string j[] = {"hello", "world", "isover"};
// 	iter(j, 3, f); 
// 	std::cout << j[0] << '\n' << j[1]  << '\n' << j[2] << '\n';

// 	std::cout << "\n\n";

// 	int x[] = {1, 2, 3, 4};
// 	iter(x, 4, f2);
// 	std::cout << x[0] << '\n' << x[1]  << '\n' << x[2] << '\n' << x[3] << '\n';

// 	std::cout << "\n\n";

// 	int y[] = {55, 66, 77, 88};
// 	iter(y, 4, f3<int>);
// 	std::cout << y[0] << '\n' << y[1]  << '\n' << y[2] << '\n' << y[3] << '\n';

// 	std::cout << "\n\n";

// 	iter(y, 4, f4<const int>);

// 	std::cout << "\n\n";
// 	return 0;
// }
