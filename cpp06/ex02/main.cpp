#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
	Base b;

	Base* a = b.generate();
	a->identify(a);
	delete a;
	a = b.generate();
	a->identify(a);
	delete a;
	a = b.generate();
	a->identify(*a);
	delete a;
	return (0);
}