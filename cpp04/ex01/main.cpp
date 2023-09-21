#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int main() {
	Animal *Animals[100];
	int x = 0;
	for (int i = 0; i < 100; i++) {
		if (x % 2 == 0)
			Animals[i] = new Cat();
		else
			Animals[i] = new Dog();
		x++;
	}
	// Animals[0].makeSound();
	for (int i = 0; i < 100; i++) {
		Animals[i]->makeSound();
	}

	for (int i = 0; i < 100; i++) {
		delete Animals[i];
	}
	return (0);
}