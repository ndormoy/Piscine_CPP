#include "Dog.hpp"

/*-------------Constructor--------------*/

Dog::Dog(void)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	_brain = new Brain();
	*this = src;
	std::cout << "Dog Copy Constructor called" << std::endl;
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
	if (this != &src) // Si la this == src, ca seg, on met une protection
	{
		this->_type = src._type;
		delete (_brain); // On delete le brain de notre instance courante
		_brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(src.getIdea(i), i);
	}
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