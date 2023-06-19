#include "Zombie.hpp"

Zombie::Zombie() {
	name = "No name";
}

Zombie::Zombie(std::string arg) {	
	name = arg;
}

Zombie::~Zombie() {
	std::cout << name << ": Destroyed\n";
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

