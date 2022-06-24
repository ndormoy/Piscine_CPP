#include "Span.hpp"

/*------------------------------Constructor--------------------------------------*/

Span::Span(void) : _N(0), _size(0)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::Span(unsigned int N) : _N(N), _size(0)
{
}

/*------------------------------Destructor--------------------------------------*/

Span::~Span(void)
{
}

/*------------------------------Overload operator-------------------------------*/

Span	&Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_N = src._N;
		_size = src._size;
	}
	return (*this);
}

/*------------------------------Exception---------------------------------------*/

const char		*Span::pbSpan::what() const throw()
{
	return ("You can't do that");
}

/*------------------------------Functions---------------------------------------*/

void	Span::addNumber(int num)
{
	if (_size < _N)
	{
		_span.push_back(num);
		_size++;
	}
	else
		throw(pbSpan());
}

void	Span::addMultipleNumber(int nb1, int nb2)
{
	if (nb1 >= nb2 || (abs(nb2 - nb1) + _size) > _N)
		throw(pbSpan());
	for (int i = nb1; i <= nb2; i++)
		addNumber(i);
}

void	Span::insertMultipleNumber(std::vector<int>::iterator nb1, std::vector<int>::iterator nb2)
{
	if (nb1 >= nb2 || (std::abs(nb2 - nb1) + _size) > _N)
		throw(pbSpan());
	_span.insert(_span.end(), nb1, nb2);
}

int	Span::shortestSpan(void)
{
	int	len = _span.size();
	if (len < 2)
		throw(pbSpan());
	std::sort(_span.begin(), _span.end());
	int	diff = INT_MAX;
	for (int i = 1; i < len; i++)
		if (abs(_span[i] - _span[i -1]) < diff)
			diff = abs(_span[i] - _span[i - 1]);
	return (diff);
}

int	Span::longestSpan(void)
{
	int	len = _span.size();
	if (len < 2)
		throw(pbSpan());
	int min = *std::min_element(_span.begin(), _span.end());
	int max = *std::max_element(_span.begin(), _span.end());

	return (max - min);
}

void	Span::printSpan(void)
{
	for(int i = 0; i < (int)_span.size(); i++)
		std::cout << _span[i] << std::endl;
}