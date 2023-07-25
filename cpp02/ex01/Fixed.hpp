#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

std::ostream&	operator<<(std::ostream& os, const class Fixed& ref);

class Fixed {
	private:
	int	_fixedValue;
	static const int _fractionalBits;

	public:
	float	toFloat() const;
	int		toInt() const;

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed();
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(const Fixed &ref);
	Fixed& operator=(const Fixed &ref);
	~Fixed();
};

#endif