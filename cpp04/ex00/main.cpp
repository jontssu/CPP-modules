#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n";

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	std::cout << "\n";

	j->makeSound();
	i->makeSound();
	meta->makeSound();
	
	std::cout << "\n";

	const WrongAnimal* x = new WrongCat();
	const WrongAnimal* y = new WrongAnimal();

	std::cout << x->getType() << std::endl;
	x->makeSound();
	y->makeSound();
	return (0);
}