#include "Dog.hpp"

/*-------------Constructor--------------*/

Dog::Dog(void)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{

}

/*-------------Destructor---------------*/

Dog::~Dog(void)
{
	delete (_brain);
	std::cout << "Dog Destructor called" << std::endl;
}

/*-------------Overload operator---------*/

Dog &Dog::operator=(Dog const &src)
{
	this->_type = src._type;
	return (*this);
}

/*-------------Getters------------------*/

std::string	Dog::getType(void) const
{
	return (this->_type);
}

std::string	Dog::getIdea(int id) const
{
	return (this->_brain->getIdea(id));
}

/*-------------Setters------------------*/

void	Dog::setIdea(std::string str, int id)
{
	this->_brain->setIdea(str, id);
}

/*-------------Functions----------------*/

void	Dog::makeSound(void) const
{
	std::cout << "Waouf !!! :-@)" << std::endl;
}