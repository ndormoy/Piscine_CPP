#include "ScalarConversion.hpp"


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
	__whatType(literal);
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

std::string	ScalarConversion::__convertFloat(float value) const
{
	std::ostringstream o;
	if (!(o << value))
	  return "";
	return (o.str());
}

std::string	ScalarConversion::__convertDouble(double value) const
{
	std::ostringstream o;
	if (!(o << value))
	  return "";
	return (o.str());
}

bool	ScalarConversion::__print_all(std::string str, char c, int i, float f, double d, int type) const
{
	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (static_cast<int> (f) < INT_MAX && static_cast<int> (f) > INT_MIN)
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: Non displayable" << std::endl;
	std::cout << "float: " << f;


	(void)str;
	std::string	check_f = __convertFloat(f);
	if (type == INT)
		std::cout << ".0f" << std::endl;
	// else if (str.find(".0") != std::string::npos && check_f.size() != str.size() - 1 && type == FLOAT)
	// 	std::cout << ".0f" << std::endl;
	// else if (str.find(".0") != std::string::npos && check_f.size() != str.size() && type == DOUBLE)
	// 	std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	std::cout << "double: " << d;
	std::string	check_d = __convertDouble(d);
	if (type == INT)
		std::cout << ".0" << std::endl;
	// else if (str.find(".0") != std::string::npos && check_d.size() != str.size() - 1 && type == FLOAT)
	// 	std::cout << ".0" << std::endl;
	// else if (str.find(".0") != std::string::npos && check_d.size() != str.size() && type == DOUBLE)
	// 	std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
	return (true);
}

void	ScalarConversion::__print_nan(void) const
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void	ScalarConversion::__print_inf(std::string str) const
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;str.c_str();
	std::cout << "float: " << str[0] << "inff" << std::endl;
	std::cout << "double: " << str[0] << "inf" << std::endl;
}

bool	ScalarConversion::__print_overflow(void) const
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: Overflow" << std::endl;
	std::cout << "float: Overflow" << std::endl;
	std::cout << "double: Overflow" << std::endl;
	return (true);
}

bool	ScalarConversion::__is_duplicate(std::string str, char c) const
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

bool	ScalarConversion::__str_is_digit(std::string str) const
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

bool	ScalarConversion::__str_is_almost_digit(std::string str) const
{
	for (int i = 1; i < static_cast<int> (str.size()); i++)
	{
		if (str[i] && isdigit(str[i]) == false && str[i] != '.' && str[i] != 'f')
		{
			if (i == 0 && str[i] == '+' && str[i] == '-')
				return (false);
		}
	}
	return (true);
}

bool	ScalarConversion::__check_comma_nbs(std::string str, char c) const
{
	const unsigned long	pos = str.find('.');
	if (pos == std::string::npos || pos == 0 || __is_duplicate(str, '.') == false)
		return (false);
	else
	{
		if (c == 'f')
		{
			const unsigned	long pos_2 = str.find(c);
			if (pos_2 != str.size() - 1)
				return (false);
			{
				const unsigned	long pos_2 = str.find(c);
				if (pos_2 != str.size() - 1)
					return (false);
			}
		}
	}
	if (__str_is_almost_digit(str) == false)
		return (false);
	return (true);
}

bool	ScalarConversion::__is_char(std::string str, char c) const
{
	char	my_c = static_cast<char> (c);
	int		i = static_cast<int> (c);
	float	f = static_cast<float> (c);
	double	d = static_cast<double> (c);
	return (__print_all(str, my_c, i, f, d, CHAR));
}

bool	ScalarConversion::__is_int(std::string str) const
{
	if (__str_is_digit(str) == false)
		return (false);
	long long int	ll = atoll(str.c_str());
	int				i = atoi(str.c_str());const
	char			c = static_cast<char> (i);
	float			f = static_cast<float> (i);
	double			d = static_cast<double> (i);
	if (ll > INT_MAX || ll < INT_MIN)
		return (__print_overflow());
	return (__print_all(str, c, i, f, d, INT));
}

bool	ScalarConversion::__is_float(std::string str) const
{
	if (__check_comma_nbs(str, 'f') == false)
		return (false);
	long double	ll = atof(str.c_str());
	float	f = std::strtof(str.c_str(), NULL);
	if (errno == ERANGE)
	{
		std::cerr << "Cannot Convert" << std::endl;
		return (true);
	}
	char	c = static_cast<char> (f);
	int		i = static_cast<int> (f);
	double	d = static_cast<double> (f);
	if (ll > FLT_MAX)
		return (__print_overflow());
	return (__print_all(str, c, i, f, d, FLOAT));
}

bool	ScalarConversion::__is_double(std::string str) const
{
	if (__check_comma_nbs(str, 'd') == false)
		return (false);
	long double	ll = atof(str.c_str());
	double		d = std::strtod(str.c_str(), NULL);
	if (errno == ERANGE)
	{
		std::cerr << "Cannot Convert" << std::endl;
		return (true);
	}
	float	f = static_cast<float> (d);
	char	c = static_cast<char> (d);
	int		i = static_cast<int> (d);
	if (ll > FLT_MAX)
		return (__print_overflow());
	return (__print_all(str, c, i, f, d, DOUBLE));
}

void	ScalarConversion::__whatType(std::string str) const
{
	if (str.compare("nan") == 0)
		__print_nan();
	else if (str.compare("-inff") == 0 || str.compare("+inff") == 0
		|| str.compare("-inf") == 0 || str.compare("+inf") == 0)
		__print_inf(str);
	else if (__is_int(str) == true)
		return ;
	else if (__is_float(str) == true)
		return ;
	else if (__is_double(str) == true)
		return ;
	else if (__is_char(str, str[0]) == true)
		return ;
}