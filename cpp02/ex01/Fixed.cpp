#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) {
	std::cout << "Int constructor called" << std::endl;
	_fixedValue = nb << Fixed::_fractionalBits;
}

Fixed::Fixed(float const nb) {
	std::cout << "Float constructor called" << std::endl;
	_fixedValue = std::roundf(nb * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &ref) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedValue = ref.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& ref) {
	os << ref.toFloat();
	return (os);
}

float Fixed::toFloat() const {
	return (((float)_fixedValue) / (1 << _fractionalBits));
}

int Fixed::toInt() const {
	return (_fixedValue >> Fixed::_fractionalBits);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedValue);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_fixedValue = raw;
}
