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

template<typename T, typename U>
void	iter(T tab[],  U len, void function(T const &))
{
	for (int i = 0; i < len; i++)
	{
		function(tab[i]);
	}
}

// class Awesome
// {
// 	public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// 	private:
// 	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }


#endif