#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private:
		int _fixedValue;
		static const int _fractionalBits;

	public:
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed();
	Fixed(Fixed &fixed);
	Fixed& operator=(Fixed &ref);
	~Fixed();
};

#endif