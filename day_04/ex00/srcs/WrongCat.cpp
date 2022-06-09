#include "WrongCat.hpp"

/*-------------Constructor--------------*/

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{

}

/*-------------Destructor---------------*/

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

/*-------------Overload operator---------*/

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	this->_type = src._type;
	return (*this);
}

/*-------------Getters------------------*/

std::string	WrongCat::GetType(void) const
{
	return (this->_type);
}

/*-------------Functions----------------*/

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaou :-)" << std::endl;
}
