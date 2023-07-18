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
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);

	Fixed();
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(const Fixed &ref);
	Fixed& operator=(const Fixed &ref);
	~Fixed();

	Fixed operator+(const Fixed &ref) const;
	Fixed operator-(const Fixed &ref) const;
	Fixed operator*(const Fixed &ref) const;
	Fixed operator/(const Fixed &ref) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	bool operator<(const Fixed &ref) const;
	bool operator>(const Fixed &ref) const;
	bool operator<=(const Fixed &ref) const;
	bool operator>=(const Fixed &ref) const;
	bool operator==(const Fixed &ref) const;
	bool operator!=(const Fixed &ref) const;
};

#endif