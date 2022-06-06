#include "Point.hpp"

/*--------------Constructor----------------*/

Point::Point(void) : _x(0), _y(0) 
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(Point const &src)
{
	*this = src;
}

/*--------------Destructor-----------------*/

Point::~Point(void)
{
}

/*--------------Overload operator----------*/

/*Ici on est oblige de passer par un const_cast<Fixed *>
parce que nos variables _x et _y sont constantes, donc pas
le choix. On doit donc passer par un pointeur et modifer
la valeur pointee directement*/

Point	&Point::operator=(Point const &rhs)
{
	Fixed	*tmp_x = const_cast<Fixed *> (&this->_x);
	Fixed	*tmp_y = const_cast<Fixed *> (&this->_y);

	*tmp_x = rhs._x;
	*tmp_y = rhs._y;
	return (*this);
}

/*--------------Getters-------------------*/

float	Point::getPointX_float(void) const
{
	return (this->_x.toFloat());
}

float	Point::getPointY_float(void) const
{
	return (this->_y.toFloat());
}

Fixed	Point::getPointX(void) const
{
	return (this->_x);
}

Fixed	Point::getPointY(void) const
{
	return (this->_y);
}

/*--------------Setters-------------------*/
