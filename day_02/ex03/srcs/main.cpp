#include "Fixed.hpp"
#include "Point.hpp"

int	 main(void)
{
	const Point	p_a(1, 1);
	const Point p_b(2, 2);
	const Point p_c(3, 1);
	const Point p_yes_1(2, 1.5);
	const Point p_yes_2(2, 1.5);
	const Point p_no_1(1, 2);
	const Point p_no_2(2, 1);

	if (bsp(p_a, p_b, p_c, p_yes_1) == true)
		std::cout << "The point p_yes_1 is in the triangle" << std::endl;
	else
		std::cout << "The point p_yes_1 is out of the triangle" << std::endl;
	if (bsp(p_a, p_b, p_c, p_yes_2) == true)
		std::cout << "The point p_yes_2 is in the triangle" << std::endl;
	else
		std::cout << "The point p_yes_2 is out of the triangle" << std::endl;
	if (bsp(p_a, p_b, p_c, p_no_1) == true)
		std::cout << "The point p_no_1 is in the triangle" << std::endl;
	else
		std::cout << "The point p_no_1 is out of the triangle" << std::endl;
	if (bsp(p_a, p_b, p_c, p_no_2) == true)
		std::cout << "The point p_no_2 is in the triangle" << std::endl;
	else
		std::cout << "The point p_no_2 is out of the triangle" << std::endl;
	return (0);
}