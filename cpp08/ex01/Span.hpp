#ifndef SPSpanN_HPP
# define SPSpanN_HPP

class Span {
	public:
		void addNumber(int n);
		void shortestSpan();
		void longestSpan();
		unsigned int getIntsIndex(int index);
	
		Span(unsigned int N);
		Span& operator=(Span const &ref);
		Span(Span const &ref);
		~Span();
	private:
		unsigned int* _ints;

		Span();
};

#endif