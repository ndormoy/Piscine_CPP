#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void	__double(T &i)
{
	int	*tmp = const_cast<int *>(&i);
	*tmp *= 2;
}

template<typename T>
void	iter(T tab[],  size_t len, void function(T const &))
{
	for (size_t i = 0; i < len; i++)
	{
		function(tab[i]);
	}
}

#endif