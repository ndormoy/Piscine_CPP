#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"

class	NotFound : public std::exception
{
	public:
		virtual	const char *what() const throw()
		{
			return ("Error : No element found.");
		}
};

template<typename T>
void	easyfind(T cont, int i)
{
	typename T::iterator	it;
	it = std::find(cont.begin(), cont.end(), i);
	if (it != cont.end())
		std::cout << "Element " << i << " found." << std::endl;
	else
		throw(NotFound());
}

#endif