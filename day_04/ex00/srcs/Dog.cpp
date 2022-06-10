#include "Dog.hpp"

/*-------------Constructor--------------*/

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
	std::cout << "Dog Copy Constructor called" << std::endl;
}

/*-------------Destructor---------------*/

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

/*-------------Overload operator---------*/

Dog &Dog::operator=(Dog const &src)
{
	this->_type = src._type;
	return (*this);
}

/*-------------Getters------------------*/

std::string	Dog::GetType(void) const
{
	return (this->_type);
}

/*-------------Functions----------------*/

void	Dog::makeSound(void) const
{
	std::cout << "Waouf !!! :-@)" << std::endl;
}