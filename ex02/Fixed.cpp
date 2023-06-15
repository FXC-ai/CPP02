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

bool	Fixed::operator>(Fixed const &rhs)
{
	return this->_RawBits > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const &rhs)
{
	return this->_RawBits < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	return this->_RawBits >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	return this->_RawBits <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const &rhs)
{
	return this->_RawBits == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	return this->_RawBits != rhs.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed result;
	int RawBits;

	RawBits = this->_RawBits + rhs.getRawBits();
	result.setRawBits(RawBits);

	return result;
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed	result;
	int		RawBits;

	RawBits = (this->_RawBits * rhs.getRawBits()) / (1 << _IndComma);
	result.setRawBits(RawBits);

	return result;
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed result(this->toFloat() / rhs.toFloat());
	return result;
}

Fixed&	Fixed::operator++()
{
	this->_RawBits += (1 << _IndComma);


	return *this;	
}


std::ostream& operator<<(std::ostream& o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

