#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main () {
	const Point a(0,0);
	const Point b(10,10);
	const Point c(10, 0);
	const Point point(6,6);

	std::cout << bsp(a, b, c, point) << std::endl;
	return (0);
}