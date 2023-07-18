#include "Fixed.hpp"

int main () {
Fixed		a;
Fixed		c(15);
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << "A in the beginning     : " << a << std::endl;
std::cout << "A with preincrement    : " << ++a << std::endl;
std::cout << "A after preincrement   : " << a << std::endl;
std::cout << "A with post increment  : " << a++ << std::endl;
std::cout << "A after post increment : " << a << std::endl;
std::cout << "B                      : " << b << std::endl;
std::cout << "A * B                  : " << a * b << std::endl;
std::cout << "B                      : " << b << std::endl;
std::cout << "A                      : " << a << std::endl;
std::cout << "B / A                  : " << b / a << std::endl;
std::cout << "A at the end           : " << a << std::endl;


std::cout << "TESTING BOOLS" << std::endl;
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


// std::cout << b << std::endl;

// std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}