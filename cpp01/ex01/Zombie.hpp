#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
	void announce();
	void setName(std::string arg);
	Zombie();
	~Zombie();

	private:
	std::string name;
};

#endif
