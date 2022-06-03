#include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(const float x, const float y);
		Point(Point const &src); //Copy constructor
		~Point(void);
		float	getPointX_float(void) const;
		float	getPointY_float(void) const;
		Point	&operator=(Point const &rhs);//overload assignment op
	private:
		Fixed const	_x;
		Fixed const	_y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);