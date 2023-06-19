#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
	void	announce(void);
	Zombie* newZombie(std::string name);
	Zombie();
	Zombie(std::string arg);
	~Zombie();

	private:
	std::string name;
};

#endif