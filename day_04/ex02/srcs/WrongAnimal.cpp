#include "WrongAnimal.hpp"

/*-------------Constructor--------------*/

WrongAnimal::WrongAnimal(void)
{
	_type = "default";
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
}

/*-------------Destructor---------------*/

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

/*-------------Overload operator--------*/

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	this->_type = src._type;
	return (*this);
}

/*-------------Getters------------------*/

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

/*-------------Functions----------------*/

void WrongAnimal::makeSound(void) const
{
	std::cout << "Im a wrong animal, it's not easy" << std::endl;
}