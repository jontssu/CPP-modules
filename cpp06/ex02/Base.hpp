#ifndef BBaseSE_HPP
# define BBaseSE_HPP

class Base {
	public:
		Base*	generate(void);
		void	identify(Base* p);
		void	identify(Base& p);

		virtual ~Base();
};

#endif