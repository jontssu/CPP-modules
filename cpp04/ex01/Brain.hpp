#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
	private:
	std::string _ideas[100];
	int			_count;

	public:
	void setIdea(std::string idea);
	void printIdea(int ideaIndex);
	void printAllIdeas();

	Brain();
	Brain(Brain const &ref);
	Brain& operator=(Brain const &ref);
	~Brain();
};

#endif