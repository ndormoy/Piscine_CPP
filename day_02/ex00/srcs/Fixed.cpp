#include "Fixed.hpp"

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

/*----------------Getters----------------------*/

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

/*----------------Setters----------------------*/

void	Fixed::setRawBits(int const nb)
{
	this->_raw_bits = nb;
}