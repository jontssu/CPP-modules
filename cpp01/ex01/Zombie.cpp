#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << name << " :deleted\n";
}

void Zombie::setName(std::string arg) {
	name = arg;
}

void Zombie::announce() {
	std::cout << name << '\n';
}
