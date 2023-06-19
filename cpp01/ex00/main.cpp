#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main() {
	Zombie Lol;
	Lol.announce();
	randomChump("Aatu");
	Zombie* Veeti = newZombie("Veeti");
	Veeti->announce();
	delete Veeti;
	return (0);
}