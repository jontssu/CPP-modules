#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point {
	private:
	Fixed const _x;
	Fixed const _y;

	public:
	bool bsp(Point const a, Point const b, Point const c, Point const point);
	Fixed getY() const;
	Fixed getX() const;

	Point();
	Point(Fixed const x, Fixed const y);
	Point(Point const &ref);
	Point& operator=(Point const &ref);
	~Point();
};

#endif