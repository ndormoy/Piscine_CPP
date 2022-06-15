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
	char	c;
	int		i;
	float	f;
	double	d;
}

/*-------------------------------Destructor-------------------------------------------*/

ScalarConversion::~ScalarConversion()
{
}

/*------------------------------Overload operator-------------------------------------*/

ScalarConversion &ScalarConversion::operator=(const ScalarConversion &src)
{
	return (*this);
}

/*	----------------------------Functions---------------------------------------------*/

int ScalarConversion::whatType(std::string literal) const
{
	int	i = 
}