#include "Cat.hpp"

/*-------------Constructor--------------*/

Cat::Cat(void)
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	_brain = new Brain();
	*this = src;
	std::cout << "Cat Copy Constructor called" << std::endl;
}

/*-------------Destructor---------------*/

Cat::~Cat(void)
{
	delete (_brain);
	std::cout << "Cat Destructor called" << std::endl;
}

/*-------------Overload operator---------*/

Cat &Cat::operator=(Cat const &src)
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

std::string	Cat::getType(void) const
{
	return (this->_type);
}

std::string	Cat::getIdea(int id) const
{
	return (this->_brain->getIdea(id));
}

/*-------------Setters------------------*/

void	Cat::setIdea(std::string str, int id)
{
	this->_brain->setIdea(str, id);
}

/*-------------Functions----------------*/

void	Cat::makeSound(void) const
{
	std::cout << "Miaou :-)" << std::endl;
}
