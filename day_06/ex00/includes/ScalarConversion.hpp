#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class ScalarConversion
{
	public:
		ScalarConversion(void); // default constructor
		ScalarConversion(const ScalarConversion &src); // copy constructor
		ScalarConversion(std::string literal);
		~ScalarConversion();

		ScalarConversion &operator=(const ScalarConversion &src);

		void	whatType(std::string literal);
		bool	__is_char(std::string str);
		bool	__is_int(std::string str);
		bool	__is_float(std::string str);
		bool	__is_double(std::string str);
		bool	__is_duplicate(std::string str, char c);
		bool	__str_is_digit(std::string str);
		bool	__str_is_almost_digit(std::string str, char c);
		void	__print_all(char c, int i, float f, double d);
		bool	__check_comma_nbs(std::string str, char c);

	private:

};




#endif