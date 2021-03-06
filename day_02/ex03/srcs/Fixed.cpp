#include "Fixed.hpp"
#include <tgmath.h> 
#include <cmath>

/*-----------------Constructor------------------*/

Fixed::Fixed(void)
{
	this->_raw_bits = 0;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::Fixed(int const i)
{
	setRawBits((i * (1 << this->_fract_bits)));

}

Fixed::Fixed(float const f)
{
	setRawBits(roundf(f * (1 << this->_fract_bits)));
}

/*-----------------Destructor-------------------*/

Fixed::~Fixed(void)
{

}

/*----------------Overload operator------------*/

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_raw_bits = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->_raw_bits > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->_raw_bits < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if ( this->_raw_bits >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_raw_bits <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->_raw_bits == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->_raw_bits != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/*Postfix increment op : ici on retourne la valeur pas changee de la variable,
mais dans this la variable est incrementee. Du coup pendant le calcul
la variable ne change pas, elle est incrementee seulement apres*/

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	tmp = *this; // 3
	this->_raw_bits++; // this 4
	return tmp; //tmp 3
}

/*Prefix increment op*/

Fixed	&Fixed::operator++(void)
{
	this->_raw_bits++;
	return (*this);
}

/*Posfix decrement op*/

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp = *this; // 3
	this->_raw_bits--; // this 4
	return tmp; //tmp 3
}

/*Prefix decrement op*/

Fixed	&Fixed::operator--(void)
{
	this->_raw_bits--;
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

void	Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
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

Fixed const	&Fixed::max(Fixed const &ref_1, Fixed const &ref_2)
{
	if (ref_1 > ref_2)
		return (ref_1);
	return (ref_2);
	// if (ref_1.getRawBits() > ref_2.getRawBits())
}

Fixed const &Fixed::max(Fixed &ref_1, Fixed &ref_2)
{
	if (ref_1 > ref_2)
		return (ref_1);
	return (ref_2); 
}

Fixed const &Fixed::min(Fixed const &ref_1, Fixed const &ref_2)
{
	// if (ref_1.getRawBits() < ref_2.getRawBits())
	if (ref_1 < ref_2)
		return (ref_1);
	return (ref_2);
}

Fixed const &Fixed::min(Fixed &ref_1, Fixed &ref_2)
{
	// if (ref_1.getRawBits() < ref_2.getRawBits())
	if (ref_1 < ref_2)
		return (ref_1);
	return (ref_2);
}	