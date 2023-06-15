#include "Fixed.hpp"


int main(void) 
{

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << "6 opérateurs de comparaisons" << std::endl;
	Fixed c(21);
	Fixed d(42);
	std::cout << "c = " << c << " d = " << d <<std::endl;
	std::cout << "c < d : " << (c < d) <<std::endl;
	std::cout << "c > d : " << (c > d) <<std::endl;
	std::cout << "c <= d : " << (c <= d) <<std::endl;
	std::cout << "c >= d : " << (c >= d) <<std::endl;
	std::cout << "c == d : " << (c == d) <<std::endl;
	std::cout << "c != d : " << (c != d) <<std::endl;

	std::cout << "4 opérateurs de arithmetique" << std::endl;
	Fixed e(21.21f);
	Fixed f(42.42f);
	std::cout << "e = " << e << " f = " << f <<std::endl;
	std::cout << "e + f = " << e + f <<std::endl;
	std::cout << "e - f = " << e - f <<std::endl;
	std::cout << "e * f = " << e * f <<std::endl;
	std::cout << "e / f = " << e / f <<std::endl;




	// Fixed a(42.42f);
	// std::cout << "a = " << a << std::endl;

	// Fixed b(42.42f);
	// std::cout << "b = " << b << std::endl;

	// Fixed c(0);
	// c = a + b;
	// std::cout << "c = " << c << std::endl;
	// std::cout << "a = " << a << std::endl;

	// bool r = b != a;
	// std::cout << "b != a" << r <<std::endl;

	// c = a * b;
	// std::cout << "a * b = " << c <<std::endl;

	// c = a / b;
	// std::cout << "a / b = " << c <<std::endl;

	// Fixed e(33);
	// Fixed f(11.1f);

	// c = e / f;
	// std::cout << "c = 33 / 11.1 = " << c <<std::endl;

	// ++c;
	// std::cout << "++c = " << c <<std::endl;

	// std::cout << "c++ = " << c++ <<std::endl;
	// std::cout << "c = " << c <<std::endl;

	// Fixed g(1.99f);
	// std::cout << "g = " << g <<std::endl;
	// ++g;
	// std::cout << "g = " << g <<std::endl;

	// Fixed h(1.99f);
	// std::cout << "h = " << h <<std::endl;
	// ++h;
	// std::cout << "h = " << h <<std::endl;

	// Fixed test(0.1235f);
	// Fixed test2(test.toFloat());
	// Fixed test3(test2.toInt());

	// std::cout << "test = " << test <<std::endl;
	// std::cout << "test2 = " << test2 <<std::endl;
	// std::cout << "test3 = " << test3 <<std::endl;

	// Fixed LePlusPetit = Fixed::min(c,g);
	// std::cout << "le plus petit = " << LePlusPetit <<std::endl;

	// Fixed TheBiggest = Fixed::max(c,g);
	// std::cout << "LE PLUS GRAND = " << TheBiggest <<std::endl;

	// Fixed const i(38);
	// Fixed const j(38.1f);

	// LePlusPetit = Fixed::min(i,j);
	// std::cout << "le plus petit = " << LePlusPetit <<std::endl;


	return (0);
}