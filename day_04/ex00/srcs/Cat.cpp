#include "Cat.hpp"

/*-------------Constructor--------------*/

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{

}

/*-------------Destructor---------------*/

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
}

/*-------------Overload operator---------*/

Cat &Cat::operator=(Cat const &src)
{
	this->_type = src._type;
	return (*this);
}

/*-------------Getters------------------*/

std::string	Cat::GetType(void) const
{
	return (this->_type);
}

/*-------------Functions----------------*/

void	Cat::makeSound(void) const
{
	std::cout << "Miaou :-)" << std::endl;
}
