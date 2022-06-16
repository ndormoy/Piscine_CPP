#include "ScalarConversion.hpp"
#include <cctype>
#include <ctype.h>
#include <limits>
#include <stdlib.h>

/*-------------------------------Constructor-------------------------------------------*/


ScalarConversion::ScalarConversion(void)
{
}

ScalarConversion::ScalarConversion(const ScalarConversion &src)
{
	*this = src;
}

ScalarConversion::ScalarConversion(std::string literal)
{
	whatType(literal);
}

/*-------------------------------Destructor-------------------------------------------*/

ScalarConversion::~ScalarConversion()
{
}
/*------------------------------Overload operator-------------------------------------*/

ScalarConversion &ScalarConversion::operator=(const ScalarConversion &src)
{
	(void)src;
	return (*this);
}

/*	----------------------------Functions---------------------------------------------*/

void	ScalarConversion::__print_all(char c, int i, float f, double d)
{
	if (std::isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0d" << std::endl;
}

bool	ScalarConversion::__is_duplicate(std::string str, char c)
{
	int	count = 0;
	for (int i = 0; i < static_cast<int> (str.size()); i++)
	{
		if (str[i] == c)
			count++;
	}
	if (count > 1)
		return (false);
	return (true);
}

bool	ScalarConversion::__str_is_digit(std::string str)
{
	for (int i = 1; i < static_cast<int> (str.size()); i++)
	{
		if (str[i] && isdigit(str[i]) == false)
		{
			if (i == 0 && str[i] == '+' && str[i] == '-')
			{
			}
			else
				return (false);
		}
	}
	return (true);
}

bool	ScalarConversion::__str_is_almost_digit(std::string str, char c)
{
	for (int i = 1; i < static_cast<int> (str.size()); i++)
	{
		if (str[i] && isdigit(str[i]) == false && str[i] != '.' && str[i] != c)
		{
			if (i == 0 && str[i] == '+' && str[i] == '-')
			{
			}
			else
				return (false);
		}
	}
	return (true);
}

bool	ScalarConversion::__check_comma_nbs(std::string str, char c)
{
	const unsigned long	pos = str.find('.');
	if (pos == std::string::npos || pos == 0 || __is_duplicate(str, '.') == false)
		return (false);
	else
	{
		const unsigned	long pos_2 = str.find(c);
		if (pos_2 != str.size() - 1)
			return (false);
	}
	if (__str_is_almost_digit(str, c) == false)
		return (false);
	return (true);
}

bool	ScalarConversion::__is_char(std::string str)
{
	(void)str;
	// for(int i = 0; i < str.length(); i++)
	// {
	// 	if (isdigit(str[i]) == false && str[i] != '-')
	// 		return (false);
	// }
	// return (true);
	return (true);
}

bool	ScalarConversion::__is_int(std::string str)
{
	if (__str_is_digit(str) == false)
		return (false);
	int		i = atoi(str.c_str());
	char	c = static_cast<char> (i);
	float	f = static_cast<float> (i);
	double	d = static_cast<double> (i);

	__print_all(c, i, f, d);
	return (true);
}

bool	ScalarConversion::__is_float(std::string str)
{
	if (__check_comma_nbs(str, 'f') == false)
		return (false);
	float	f = atof(str.c_str());
	char	c = static_cast<char> (f);
	int		i = static_cast<int> (f);
	double	d = static_cast<double> (f);
	__print_all(c, i, f, d);
	return (true);
}

bool	ScalarConversion::__is_double(std::string str)
{
	(void)str;
	return (true);
}

void	ScalarConversion::whatType(std::string str)
{
	if (__is_int(str) == true)
		return ;
	else if (__is_float(str) == true)
		return ;
	else if (__is_double(str) == true)
		return ;
	else if (__is_char(str) == true)
		return ;
}