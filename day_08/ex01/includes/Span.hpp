#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>
#include <limits.h>
#include <stdexcept>

class	Span
{
	public:
		Span(void); // default constructor
		Span(const Span &src); // copy constructor
		Span(unsigned int N); // constructor
		~Span(void); // destructor

		Span			&operator=(const Span &src); // Overload assignment operator

		void	addNumber(int num);
		void	addMultipleNumber(int nb1, int nb2);
		int		shortestSpan(void);
		int		longestSpan(void);

		class	pbSpan: public std::exception
		{
			public:
				virtual	const char *what() const throw();
		};
	private:
		unsigned int				_N;
		unsigned int				_size;
		std::vector<int>			_span;
		std::vector<int>::iterator	_it;
};

#endif