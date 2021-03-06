#include "Zombie.hpp"

/*----------------------Constructeur-------------------*/

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie Constructor called, hello " << name << std ::endl;
	_name = name;
}

/*----------------------Destructeur--------------------*/

Zombie::~Zombie(void)
{
	std::cout << "Zombie Destructor called, ";
	std::cout << this->_name << " has been destroyed" << std::endl;

}

/*----------------------GETTERS------------------------*/

std::string	Zombie::get_name(void)
{
	return (this->_name);
}

/*----------------------SETTERS------------------------*/

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

/*----------------------FUNCTIONS----------------------*/

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}