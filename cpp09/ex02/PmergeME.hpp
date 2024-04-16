#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <list>
#include <algorithm>

typedef std::vector<int> vec_int;
typedef std::list<vec_int::iterator> list_it;
typedef std::list<list_it::iterator> list_it_it;

class PmergeME {
	public:
		PmergeME(char **argv);

		void executeVector(int stride);
	private:
		std::vector<int> vec;
		std::deque<int> deq;
};

#endif