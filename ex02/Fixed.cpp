#include "Fixed.hpp"

Fixed::Fixed() : _RawBits(0), _IndComma(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _IndComma(8)
{
	this->_RawBits = (n << _IndComma);
	std::cout << "RawBit = " << this->_RawBits << std::endl;
}

Fixed::Fixed(float const n) : _IndComma(8)
{
	this->_RawBits = static_cast<int> (n*256);
	std::cout << "RawBit = " << this->_RawBits << std::endl;
}

float Fixed::toFloat(void) const
{
	/*
		Algo :
			1) On convertit RawBit en un float
			2) On divise ce float par 256 pour retrouver la valeur initiale
		C++ se charge de donner à la mantisse et à l'exposant les bonnes valeurs.
	*/
	return static_cast<float>(this->_RawBits) / 256;
}

int Fixed::toInt(void) const
{
	return (this->_RawBits >> _IndComma);
}

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

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_RawBits = rhs.getRawBits();
	return *this;
}

// void	to_int()
// {
// 	this->
// }

std::ostream& operator<<(std::ostream& o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}