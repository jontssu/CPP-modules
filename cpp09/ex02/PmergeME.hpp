#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <list>
#include <algorithm>
#include <chrono>

typedef std::vector<int> vec_int;
typedef std::list<vec_int::iterator> list_it;
typedef std::list<list_it::iterator> list_it_it;

typedef std::deque<int> deq_int;
typedef std::list<deq_int::iterator> list_it2;
typedef std::list<list_it2::iterator> list_it_it2;

class PmergeME {
	public:
		PmergeME() = default;
		PmergeME(char **argv);

		void executeVector(int stride);
		void executeDeque(int stride);
		void printUnsorted();
		void sortAndPrint();
		void printVec();
		void printDeq();
		int	get_elements();

	private:
		int	elements;
		std::vector<int> unsorted;
		std::vector<int> vec;
		std::deque<int> deq;
};

#endif