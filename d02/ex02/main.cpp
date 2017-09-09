#include <iostream>
#include "Fixed.class.hpp"

int main(void)
{
//	Fixed	a;
	Fixed	a(42.1f);
	Fixed const	b(42.1f);
	Fixed const	c(42.9f);
//	Fixed const	b( Fixed( 5.05f) * Fixed ( 2 ) );

	std::cout << a++ << std::endl;	
	std::cout << a << std::endl;	
	std::cout << ++a << std::endl;	
	std::cout << a << std::endl;

	std::cout << min(b, c) << std::endl;	
/*	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;*/
}
