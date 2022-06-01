#include "Fixed.hpp"


int main(void)
{
	bool	test;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << " --> |a|" << std::endl;
	std::cout << ++a << " --> |++a|" <<std::endl;
	std::cout << a << " --> |a|" << std::endl;
	std::cout <<  a++ << " --> |a++|" << std::endl;
	std::cout << a << " --> |a|" << std::endl;
	std::cout << b << " --> |b|" << std::endl;
	std::cout << --a << " --> |a|" << std::endl;	
	std::cout << a << " --> |a|" << std::endl;
	std::cout << a-- << " --> |a--|" << std::endl;
	std::cout << a << " --> |a|" << std::endl;
	std::cout << Fixed::max( a, b ) << " --> |Fixed::max(a, b)|" << std::endl;
	std::cout << ++a << " --> |++a|" << std::endl;
	test = a < b;
	std::cout << test << a << b << " --> |test = a < b|" << std::endl;
	test = a > b;
	std::cout << test << " --> |test = a > b|" << std::endl;
	std::cout << true << std::endl;
	return (0);
}
