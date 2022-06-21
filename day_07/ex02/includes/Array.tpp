#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template< typename  T>
class	Array
{
	public:
		/*--------------default constructor--------------*/
		Array(void) : _array(NULL), _len(0)
		{
		}
		
		/*--------------copy constructor-----------------*/
		Array(const Array &src) : _array(new T[src._len]), _len(src._len)
		{
			*this = src;
		}

		/*--------------constructor----------------------*/
		Array(unsigned int n) :_array(new T[n]), _len(n)
		{
			for (unsigned int i = 0; i < n; i++)
				_array[i] = 0;
		}

		/*--------------destructor-----------------------*/
		~Array(void)
		{
			//std::cout << "Array destructor called" << std::endl;
			if (_array)
				delete [] _array;
		}

		/*--------------Overload assignment operator-----*/
		Array& operator=(const Array &src)
		{
			if (this != &src)
			{
				if (_array)
					delete [] _array;
				_array = new T[src._len];
			}
			return (*this);
		}
		/*--------------Overload Operator [] ------------*/
		
		/*--------------Getter _array--------------------*/
		T	*getT(void) const // 
		{
			return (this->_array);
		}
		/*--------------Getter _len-----------------------*/
		size_t	size(void) // return nb of elements in the array
		{
			return (_len);
		}

	private:
		T		*_array;
		size_t	_len;

};

#endif