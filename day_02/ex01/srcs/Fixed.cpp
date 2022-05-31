#include "Fixed.hpp"
#include <tgmath.h> 
#include <cmath>

/*-----------------Constructor------------------*/

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_raw_bits = 0;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits((i * (1 << this->_fract_bits)));

}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f * (1 << this->_fract_bits)));
}

/*-----------------Destructor-------------------*/

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*----------------Overload operator------------*/

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_raw_bits = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}

/*----------------Getters----------------------*/

int		Fixed::getRawBits(void) const
{
	return (this->_raw_bits);
}

/*----------------Setters----------------------*/

void	Fixed::setRawBits(int const nb)
{
	this->_raw_bits = nb;
}

/*----------------Set static var---------------*/

int	const Fixed::_fract_bits = 8;

/*----------------Functions--------------------*/

float	Fixed::toFloat(void) const
{
	return ((float)this->_raw_bits / (float)(1 << _fract_bits));
}

int		Fixed::toInt(void) const
{
	return ((int)this->_raw_bits / (int)(1 << _fract_bits));
}