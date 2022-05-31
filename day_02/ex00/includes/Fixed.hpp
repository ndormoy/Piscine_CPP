#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed(void); // default constructor
		Fixed(Fixed const &src); // copy constructor
		~Fixed(void); // destructor
		int	getRawBits(void) const; // return raw bits
		void	setRawBits(int const nb); // set raw bits
		Fixed &operator=(Fixed const &rhs); // overload assignment operator
	private:
		int	_raw_bits; // entier pour stocker la valeur du nb en virgule fixe
		int	const static _fract_bits = 8; // Stock le nb de bits de la partie fractionnaire, dont la valeur sera == 8
};

