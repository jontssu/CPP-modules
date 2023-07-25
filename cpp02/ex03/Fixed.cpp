#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedValue(0) {
}

Fixed::Fixed(int const nb) {
	_fixedValue = nb << _fractionalBits;
}

Fixed::Fixed(float const nb) {
	_fixedValue = std::roundf(nb * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &ref) {
	this->_fixedValue = ref.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
}

std::ostream&	operator<<(std::ostream& os, const Fixed& ref) {
	os << ref.toFloat();
	return (os);
}

float Fixed::toFloat() const {
	return (((float)_fixedValue) / (1 << _fractionalBits));
}

int Fixed::toInt() const {
	return (_fixedValue >> _fractionalBits);
}

int Fixed::getRawBits(void) const {
	return (_fixedValue);
}

void Fixed::setRawBits(int const raw) {
	_fixedValue = raw;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a._fixedValue < b._fixedValue ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a._fixedValue < b._fixedValue ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a._fixedValue > b._fixedValue ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a._fixedValue > b._fixedValue ? a : b);
}

Fixed Fixed::operator+(const Fixed &ref) const {
	Fixed tmp(*this);
	tmp._fixedValue = std::roundf((this->toFloat() + ref.toFloat()) * (1 << _fractionalBits));
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &ref) const {
	Fixed tmp(*this);
	tmp._fixedValue = std::roundf((this->toFloat() - ref.toFloat()) * (1 << _fractionalBits));
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &ref) const {
	Fixed tmp(*this);
	tmp._fixedValue = std::roundf((this->toFloat() * ref.toFloat()) * (1 << _fractionalBits));
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &ref) const {
	Fixed tmp(*this);
	tmp._fixedValue = std::roundf((this->toFloat() / ref.toFloat()) * (1 << _fractionalBits));
	return (tmp);
}

Fixed& Fixed::operator++() {
	_fixedValue++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->operator++();
	return (tmp);
}

Fixed& Fixed::operator--() {
	_fixedValue--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->operator--();
	return (tmp);
}


bool Fixed::operator<(const Fixed &ref) const {
	return (_fixedValue < ref._fixedValue);
}

bool Fixed::operator>(const Fixed &ref) const {
	return (_fixedValue > ref._fixedValue);
}

bool Fixed::operator<=(const Fixed &ref) const {
	return (_fixedValue <= ref._fixedValue);
}

bool Fixed::operator>=(const Fixed &ref) const {
	return (_fixedValue >= ref._fixedValue);
}

bool Fixed::operator==(const Fixed &ref) const {
	return (_fixedValue == ref._fixedValue);
}

bool Fixed::operator!=(const Fixed &ref) const {
	return (_fixedValue != ref._fixedValue);
}