#include "WrongCat.hpp"

void	WrongCat::makeSound() const {
	std::cout << "WrongCat sounds" << std::endl;
}

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called\n";
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &ref) {
	std::cout << "WrongCat copy constructor called\n";
	type = ref.type;
}

WrongCat& WrongCat::operator=(WrongCat const &ref) {
	std::cout << "WrongCat copy assigment operator called\n";
	if (this != &ref) {
		type = ref.type;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}