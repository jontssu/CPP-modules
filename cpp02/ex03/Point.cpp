#include "Point.hpp"
#include "Fixed.hpp"

Fixed Point::getX() const {
	return (_x);
}

Fixed Point::getY() const {
	return (_y);
}

Point::Point() : _x(0), _y(0) {}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {}

Point::Point(Point const &ref) : _x(ref._x), _y(ref._y) {}

Point& Point::operator=(Point const &ref) {
	if (this != &ref)
		return (*this);
	return (*this);
}

Point::~Point() {}