#include "Fixed.hpp"

/* int main(void)
{

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(5.5f);
	Fixed d(5.5f);
	Fixed e;
	Fixed f(1.5f);

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
	std::cout << "| a = " << a << " | b = " << b << " | c = " << c << " | d = " << d  << "| f = " << f << std::endl;
	std::cout << Fixed::max( a, b ) << " --> |Fixed::max(a, b)|" << std::endl;
	std::cout << Fixed::max(c, f) << " --> |Fixed::max(c, f)| non const" << std::endl;
	std::cout << Fixed::min(a, b) << " --> |Fixed::min(a, b)|" << std::endl;
	std::cout << Fixed::min(c, f) << " --> |Fixed::min(a, f)| non const" << std::endl;
	std::cout << ++a << " --> |++a|" << std::endl;
	std::cout << (a < b) << " --> |(a < b)|"<< std::endl;
	std::cout << (a > b) << " --> |(a > b)|"<< std::endl;
	std::cout << (a != b) << " --> |(a != b)|" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << (c <= d) << " --> |(c <= d)|" << std::endl;
	std::cout << (c >= d) << " --> |(c >= d)|" << std::endl;
	e = Fixed (3.14f);
	std::cout << e << " --> |(e = 3.14f)" << std::endl;
	return (0);
} */

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}