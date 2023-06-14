#include "Fixed.hpp"


int main(void) 
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;


	Fixed a(42.42f);
	std::cout << "a = " << a << std::endl;

	Fixed b(42.42f);
	std::cout << "b = " << b << std::endl;

	Fixed c(0);
	c = a + b;
	std::cout << "c = " << c << std::endl;
	std::cout << "a = " << a << std::endl;

	bool r = b != a;

	std::cout << "r = " << r << std::endl;


	return 0;
}