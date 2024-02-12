#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>


template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		MutantStack() {}
		MutantStack(MutantStack const& other)
			: std::stack<T, Container>(other) {}
		MutantStack& operator=(MutantStack const& other) {
			if (this != &other) {
				std::stack<T, Container>::operator=(other);
			}
			return (*this);
		}
		~MutantStack() {}

		inline iterator begin() {
			return (this->c.begin());
		}
		inline iterator end() {
			return (this->c.end());
		}
		inline const_iterator begin() const {
			return (this->c.begin());
		}
		inline const_iterator end() const {
			return (this->c.end());
		}
	private:

};

#endif