#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <list>

class PmergeME {
	public:
		PmergeME(char **argv);

		void executeVector(int stride);
	private:
		std::vector<int> vec;
		std::deque<int> deq;
};

#endif