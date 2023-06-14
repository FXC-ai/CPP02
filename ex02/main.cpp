#include "Fixed.hpp"

int main( void ) 
{
	Fixed test_fl(-255.5f);

	std::cout << test_fl.toFloat() << std::endl;

	return 0;
}