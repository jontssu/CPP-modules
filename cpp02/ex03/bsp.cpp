#include "Point.hpp"

Fixed calculateArea(Point const a, Point const b, Point const c) {
	Fixed Area = ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
	return (Area.getRawBits() < 0 ? Area * Fixed(-1) : Area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed triangle = calculateArea(a, b, c);
	Fixed triangles = calculateArea(point, a, b) + calculateArea(point, b, c) + calculateArea(point, a, c);
	Fixed onLine = calculateArea(a, b, point) * calculateArea(a, c, point) * calculateArea(b, c, point);
	return (triangle == triangles && onLine.getRawBits() > 0 ? 1 : 0);
}