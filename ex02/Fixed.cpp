#include "Fixed.hpp"

Fixed::Fixed() : _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	this->_RawBits = (n << this->_IndComma);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n)
{
	this->_RawBits = static_cast<int>(roundf(n*(1 << this->_IndComma)));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_RawBits) / (1 << this->_IndComma);
}

int Fixed::toInt(void) const
{
	return (this->_RawBits >> _IndComma);
}

Fixed::Fixed(Fixed const &src)
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
	return this->_RawBits;
}

void Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_RawBits = rhs.getRawBits();
	return *this;
}

Fixed&	Fixed::operator+(Fixed const &rhs)
{
	Fixed result;
	int RawBits;

	RawBits = this->_RawBits + rhs.getRawBits();

	result.setRawBits(RawBits);

	return result;
}



std::ostream& operator<<(std::ostream& o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

