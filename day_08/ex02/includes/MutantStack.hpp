#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>
#include <limits.h>
#include <stdexcept>
#include <stack>
#include <deque>

template<typename T>
class	MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(void) // default constructor
		{
		}
		MutantStack(const MutantStack &src) // copy constructor
		{
			*this = src;
		}
		virtual	~MutantStack(void)
		{
		}

		MutantStack	&operator=(const MutantStack &src)
		{
			if (this != &src)
				this->c = src.c;
			return (*this);
		}
		iterator	begin();
		iterator	end();
		iterator	rbegin();
		iterator	rend();

	private:

};

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

#endif