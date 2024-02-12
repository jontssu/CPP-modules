#ifndef Span_HPP
# define Span_HPP

#include <vector>

class Span {
	public:
		Span(unsigned int N);
		Span& operator=(Span const &ref);
		Span(Span const &ref);
		~Span();

		void addNumber(int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		unsigned int getIntIndex(unsigned int index);

		template<typename T>
		inline void fill(T begin, T end) {
			while (begin != end) {
				addNumber(*begin++);
			}
		}

	private:
		Span();

		std::vector<int> _ints;
		unsigned int _maxSize;
		bool _sorted;
};

#endif