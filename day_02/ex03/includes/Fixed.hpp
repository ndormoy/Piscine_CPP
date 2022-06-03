#ifndef FIXED_HPP
#define FIXED_HPP

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

		int		getRawBits(void) const; // return raw bits
		void	setRawBits(int const raw); // set raw bits

		static Fixed const	&max(Fixed const &ref_1, Fixed const &ref_2); //Max avec const
		static Fixed const	&max(Fixed &ref_1, Fixed &ref_2); // Max
		static Fixed const	&min(Fixed const &ref_1, Fixed const &ref_2); // Min avec const
		static Fixed const	&min(Fixed &ref_1, Fixed &ref_2); // Min

		Fixed	&operator=(Fixed const &rhs); // overload assignment operator
		bool	operator>(Fixed const &rhs) const; //overload op
		bool	operator<(Fixed const &rhs) const; //overload op
		bool	operator>=(Fixed const &rhs) const; //overload op
		bool	operator<=(Fixed const &rhs) const; //overload op
		bool	operator==(Fixed const &rhs) const; //overload op
		bool	operator!=(Fixed const &rhs) const; //overload op
		Fixed	operator+(Fixed const &rhs) const; //overload op
		Fixed	operator-(Fixed const &rhs) const; //overload op
		Fixed	operator*(Fixed const &rhs) const; //overload op
		Fixed	operator/(Fixed const &rhs) const; //overload op
		Fixed	operator++(int); // Postfix increment op
		Fixed	&operator++(void); // Prefix increment op
		Fixed	operator--(int); // Postfix decrement op
		Fixed	&operator--(void); // Prefix decrement op
		float	toFloat(void) const; //Convertit la valeur a virgule fixe en virgule flottante
		int	 	toInt(void) const; //Convertit la valeur a virgule fixe en nb entier

	private:
		int	_raw_bits; // entier pour stocker la valeur du nb en virgule fixe
		int	const static _fract_bits; // Stock le nb de bits de la partie fractionnaire, dont la valeur sera == 8
};

std::ostream	&operator<<(std::ostream &out, Fixed const &rhs);

#endif