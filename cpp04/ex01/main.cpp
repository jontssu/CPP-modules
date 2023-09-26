#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int main() {
	// Animal *Animals[10];
	// int x = 0;
	// for (int i = 0; i < 10; i++) {
	// 	if (x % 2 == 0)
	// 		Animals[i] = new Cat();
	// 	else
	// 		Animals[i] = new Dog();
	// 	x++;
	// }

	// // for (int i = 0; i < 10; i++) {
	// // 	Animals[i]->makeSound();
	// // }

	// // dynamic_cast<Cat*>(Animals[0])->getBrain()->setIdea("Eka idea");
	// // dynamic_cast<Cat*>(Animals[0])->getBrain()->printIdea(0);

	// for (int i = 0; i < 10; i++) {
	// 	delete Animals[i];
	// }

	Cat Kissa;
	Cat ToineKissa;

	Kissa.getBrain()->setIdea("mee kouluu");
	Kissa.getBrain()->setIdea("mee kouluu1");
	Kissa.getBrain()->setIdea("mee kouluu2");
	Kissa.getBrain()->setIdea("mee kouluu3");
	Kissa.getBrain()->printAllIdeas();

	ToineKissa = Kissa;
	Kissa.getBrain()->setIdea("wow uus idea");
	ToineKissa.getBrain()->printAllIdeas();
	std::cout << "\n\n";
	Kissa.getBrain()->printAllIdeas();
	return (0);
}