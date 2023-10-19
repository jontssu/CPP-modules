#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base*	Base::generate(void) {
	static int i = 0;
	if (i++ == 0) {
		srand(time(NULL));
	}
	switch ((rand() % 3)) {
		case 0 :{
			std::cout << "Creating A\n";
			return (new A());
		}
		case 1 : {
			std::cout << "Creating B\n";
			return (new B());
		}
		case 2 : {
			std::cout << "Creating C\n";
			return (new C());
		}
	}
	return (NULL);
}

void	Base::identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "It was A\n";
	}
	else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "It was B\n";
	}
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "It was C\n";
}

void	Base::identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "It was A\n";
	}
	catch (...) { 
		try {
			B b = dynamic_cast<B&>(p);
			std::cout << "It was B\n";
		}
		catch (...) {
			try {
				C c = dynamic_cast<C&>(p);
				std::cout << "It was C\n";

			}
			catch (...) {
				std::cout << "It was none\n";
			}
		}
	}
}

Base::~Base() {}