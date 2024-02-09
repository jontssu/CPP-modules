#ifndef Span_HPP
# define Span_HPP

#include <vector>

class Span {
	public:
		void addNumber(int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		unsigned int getIntIndex(int index);
	
		Span(unsigned int N);
		Span& operator=(Span const &ref);
		Span(Span const &ref);
		~Span();
	private:
		std::vector<int> _ints;
		unsigned int _maxSize;
		bool _sorted;

		Span();
};

#endif