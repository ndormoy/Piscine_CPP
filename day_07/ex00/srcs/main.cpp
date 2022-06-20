#include "whatever.hpp"

// int main()
// {
// 	int		a = 10;
// 	int		b = 5;
// 	char	c = 'c';
// 	char	d = 'd';

// 	std::cout << "Before Swap\na = " << a << "\nb = " << b << std::endl;
// 	std::cout << "c = " << c << "\nd = " << d << std::endl;
// 	std::cout << "--------------------------------------" << std::endl;
// 	::swap(a, b);
// 	::swap(c, d);
// 	std::cout << "After Swap\na = " << a << "\nb = " << b << std::endl;
// 	std::cout << "c = " << c << "\nd = " << d << std::endl;
// 	std::cout << "--------------------------------------" << std::endl;

// 	int	min = ::min(a, b);
// 	std::cout << "min = " << min << std::endl;
// 	int	max = ::max(a, b);
// 	std::cout << "max = " << max << std::endl;
// }

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}