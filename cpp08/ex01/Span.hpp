#ifndef SPSpanN_HPP
# define SPSpanN_HPP

#include <vector>

class Span {
	public:
		void addNumber(int n);
		void shortestSpan();
		void longestSpan();
		unsigned int getIntIndex(int index);
	
		Span(unsigned int N);
		Span& operator=(Span const &ref);
		Span(Span const &ref);
		~Span();
	private:
		std::vector<unsigned int> _ints;

		Span();
};

#endif