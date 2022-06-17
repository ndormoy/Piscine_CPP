#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <limits.h>
#include <float.h>
#include <ctype.h>
#include <cctype>
#include <stdlib.h>
#include <errno.h>

#define INT 0
#define FLOAT 1
#define DOUBLE 2
#define CHAR 3

class ScalarConversion
{
	public:
		ScalarConversion(void); // default constructor
		ScalarConversion(const ScalarConversion &src); // copy constructor
		ScalarConversion(std::string literal);
		~ScalarConversion();

		ScalarConversion &operator=(const ScalarConversion &src);

		void	__whatType(std::string literal) const;
		bool	__is_char(char c) const;
		bool	__is_int(std::string str) const;
		bool	__is_float(std::string str) const;
		bool	__is_double(std::string str) const;
		bool	__is_duplicate(std::string str, char c) const;
		bool	__str_is_digit(std::string str) const;
		bool	__str_is_almost_digit(std::string str) const;
		bool	__check_comma_nbs(std::string str, char c) const;
		bool	__print_all(char c, int i, float f, double d, int type) const;
		void	__print_nan(void) const;
		void	__print_inf(std::string str) const;
		bool	__print_overflow(void) const;

	private:

};




#endif