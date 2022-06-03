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

/*--------------Setters-------------------*/

/*--------------Functions-----------------*/

// float sign (Point p1, Point p2, Point p3)
// {
//     return (p1.getPointX_float() - p3.getPointX_float()) * (p2.getPointY_float() - p3.getPointY_float()) - (p2.getPointX_float() - p3.getPointX_float()) * (p1.getPointY_float() - p3.getPointY_float());
// }
// /*On regarde si le point est dans le triangle, mais on ne check pas les arretes*/

// bool __point_in_triangle (Point const a, Point const b, Point const c, Point const point)
// {
// 	float d1 = sign(point, a, b);
// 	float d2 = sign(point, b, c);
//     float d3 = sign(point, c, a);
//     bool neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
//     bool pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

//     return !(neg && pos);
// }

/*Tout simplement la formule pour calculer une air avec 3 points (et leurs coord)*/

float	__get_area(float x_1, float y_1, float x_2, float y_2, float x_3, float y_3)
{
	return (std::abs((x_1 * (y_2 - y_3) + x_2 * (y_3 - y_1) + x_3 * (y_1 - y_2)) / 2));
}

/*Autre Methode pour checker si un point est dans un triangle*/

bool	__point_in_triangle (Point const a, Point const b, Point const c, Point const point)
{
	float air_abc = __get_area(a.getPointX_float(), a.getPointY_float(), b.getPointX_float(), b.getPointY_float(), c.getPointX_float(), c.getPointY_float());
	float air_pac = __get_area(point.getPointX_float(), point.getPointY_float(), a.getPointX_float(), a.getPointY_float(), c.getPointX_float(), c.getPointY_float());
	float air_pab = __get_area(point.getPointX_float(), point.getPointY_float(), a.getPointX_float(), a.getPointY_float(), b.getPointX_float(), b.getPointY_float());
	float air_pbc = __get_area(point.getPointX_float(), point.getPointY_float(), b.getPointX_float(), b.getPointY_float(), c.getPointX_float(), c.getPointY_float());
	if ((air_abc - (air_pac + air_pab + air_pbc)) == 0)
		return (true);
	return (false);
}


/*On calcule l'equation de droite --> en trouvant m le coef dir et p l'ordonnee a l'origine.
Puis on determine si le point "point" appartient a la droite si oui on retourne false car on
ne considere pas un point sur l'arrete comme faisant partie du triangle*/

bool	__point_in_line(Point const a, Point const b, Point const point)
{
	float m = (b.getPointY_float() - a.getPointY_float()) / (b.getPointX_float() - a.getPointX_float());
	float p = a.getPointY_float() - (m * a.getPointX_float());
	if ((point.getPointY_float() - (m * point.getPointX_float() + p)) == 0)
		return (false);
	return (true); 
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (__point_in_line(a, b, point) == false)
		return (false);
	if (__point_in_line(a, c, point) == false)
		return (false);
	if (__point_in_line(b, c, point) == false)
		return (false);
	return (__point_in_triangle(a, b, c, point));
}