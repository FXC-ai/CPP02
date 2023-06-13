#include "Fixed.hpp"

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_RawBits = rhs.getRawBits();
	return *this;
}

Fixed::Fixed() : _RawBits(0), _IndComma(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n) : _RawBits(n), _IndComma(8){}

Fixed::Fixed(Fixed const &src) : _IndComma(8)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	(void) this->_IndComma;
	return this->_RawBits;
}

void Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
}

std::ostream& operator<<(std::ostream& o, Fixed const & i)
{
	o << i.getRawBits();
	return o;
}