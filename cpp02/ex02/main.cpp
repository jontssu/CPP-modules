#include "Fixed.hpp"

int main () {
Fixed		a;
Fixed		b(15);
Fixed const c( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << "\nTESTING INCREMENTS/DECREMENTS" << std::endl;
std::cout << "A in the beginning     : " << a << std::endl;
std::cout << "A with preincrement    : " << ++a << std::endl;
std::cout << "A after preincrement   : " << a << std::endl;
std::cout << "A with post increment  : " << a++ << std::endl;
std::cout << "A after post increment : " << a << std::endl;
std::cout << "A with predecrement    : " << --a << std::endl;
std::cout << "A after predecrement   : " << a << std::endl;
std::cout << "A with post decrement  : " << a-- << std::endl;
std::cout << "A after post decrement : " << a << std::endl;
std::cout << "++A                    : " << ++a << std::endl;

std::cout << "\nTESTING ARITHMETICS" << std::endl;
std::cout << "C                      : " << c << std::endl;
std::cout << "A                      : " << a << std::endl;
std::cout << "A * C                  : " << a * c << std::endl;
std::cout << "C / A                  : " << c / a << std::endl;
std::cout << "C + A                  : " << c + a << std::endl;
std::cout << "C - A                  : " << c - a << std::endl;

std::cout << "\nTESTING BOOLS" << std::endl;
std::cout << "C                      : " << c << std::endl;
std::cout << "A                      : " << a << std::endl;
std::cout << "A < C                  : " << (a < c) << std::endl;
std::cout << "A > C                  : " << (a > c) << std::endl;
std::cout << "A <= C                 : " << (a <= c) << std::endl;
std::cout << "A <= A                 : " << (a <= a) << std::endl;
std::cout << "A >= C                 : " << (a >= c) << std::endl;
std::cout << "A >= A                 : " << (a >= a) << std::endl;
std::cout << "A == C                 : " << (a == c) << std::endl;
std::cout << "A != C                 : " << (a != c) << std::endl;

std::cout << "\nTESTING MIN/MAX" << std::endl;
std::cout << "MIN                    : " << a.min(a, b) << std::endl;
std::cout << "MAX                    : " << a.max(a, b) << std::endl;


// std::cout << b << std::endl;

// std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}