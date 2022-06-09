#include "Brain.hpp"

/*-------------Constructor--------------*/

Brain::Brain(void)
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = src;
}

/*-------------Destructor---------------*/

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}

/*-------------Overload operator---------*/

Brain	 &Brain::operator=(Brain const &src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

/*-------------Getters------------------*/

std::string	Brain::getIdea(int id) const
{
	return (this->_ideas[id]);
}

/*-------------Functions----------------*/

void	Brain::setIdea(std::string str, int id)
{
	this->_ideas[id] = str;
}