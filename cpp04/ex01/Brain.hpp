#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
	private:
	std::string _ideas[100];

	public:
	Brain();
	Brain(Brain const &ref);
	Brain& operator=(Brain const &ref);
	~Brain();
};

#endif