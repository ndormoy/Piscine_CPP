#include "Fixed.hpp"
#include "Point.hpp"

int	 main(void)
{
	const Point	p_a(0, 0);
	const Point p_b(0, 3);
	const Point p_c(2, 1);
	const Point p_yes_1(0.5, 0.5);
	const Point p_yes_2(1, 1);
	const Point p_no_1(1, 0.5);
	const Point p_no_2(2, 1);
	const Point p_no_3(0, 2);
	

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
	if (bsp(p_a, p_b, p_c, p_no_3) == true)
		std::cout << "The point p_no_3 is in the triangle" << std::endl;
	else
		std::cout << "The point p_no_3 is out of the triangle" << std::endl;
	return (0);
}
