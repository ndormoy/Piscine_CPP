#include <iostream>
#include <string>
#include <fstream>
#include <tgmath.h> 

class Fixed
{
	public:
		Fixed(void); // default constructor
		Fixed(Fixed const &src); // copy constructor
		Fixed(int const i); // Convertit le int i to fixed point
		Fixed(float const f); // Convertit le float f to fixed point
		~Fixed(void); // destructor

		int	getRawBits(void) const; // return raw bits
		void	setRawBits(int const nb); // set raw bits
		Fixed &operator=(Fixed const &rhs); // overload assignment operator
		bool	operator>(Fixed const &rhs) const; //overload op
		// bool	operator<(Fixed const &rhs) const; //overload op
		// bool	operator>=(Fixed const &rhs) const; //overload op
		// bool	operator<=(Fixed const &rhs) const; //overload op
		// bool	operator==(Fixed const &rhs) const; //overload op
		// bool	operator!=(Fixed const &rhs) const; //overload op
		// Fixed	operator+(Fixed const &rhs) const; //overload op
		// Fixed	operator-(Fixed const &rhs) const; //overload op
		// Fixed	operator*(Fixed const &rhs) const; //overload op
		// Fixed	operator/(Fixed const &rhs) const; //overload op

		float	toFloat(void) const; //Convertit la valeur a virgule fixe en virgule flottante
		int	 	toInt(void) const; //Convertit la valeur a virgule fixe en nb entier

	private:
		int	_raw_bits; // entier pour stocker la valeur du nb en virgule fixe
		int	const static _fract_bits; // Stock le nb de bits de la partie fractionnaire, dont la valeur sera == 8
};

std::ostream	&operator<<(std::ostream &out, Fixed const &rhs);