#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main() {
	Zombie* Zombies = zombieHorde(5, "Stoopid");
	for (int i = 0; i < 5; i++)
		Zombies[i].announce();
	delete[] Zombies;
	return (0);
}