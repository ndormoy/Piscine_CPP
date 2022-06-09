#include "Animal.hpp"

/*-------------Constructor--------------*/

Animal::Animal(void)
{
	_type = "default";
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

/*-------------Destructor---------------*/

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

/*-------------Overload operator--------*/

Animal &Animal::operator=(Animal const &src)
{
	this->_type = src._type;
	return (*this);
}

/*-------------Getters------------------*/

std::string	Animal::getType(void) const
{
	return (this->_type);
}

/*-------------Functions----------------*/

void Animal::makeSound(void) const
{
	std::cout << "Miaou.. Grrrrr ... Wouuuf ... Cuicui... I don't know X_X" << std::endl;
}
