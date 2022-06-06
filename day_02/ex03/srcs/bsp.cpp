#include "Fixed.hpp"
#include "Point.hpp"

/*--------------Functions-----------------*/

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
	Fixed	m = ((b.getPointY() - a.getPointY()) / (b.getPointX() - a.getPointX()));
	Fixed	p = ((a.getPointY() - (m * a.getPointX())));
	if ((point.getPointY() - (m * point.getPointX() + p)) == 0)
		return (false);
	else if (a.getPointX() == b.getPointX() && point.getPointX() == a.getPointX())
		return (false);
	else if (a.getPointY() == b.getPointY() && point.getPointY() == a.getPointY())
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