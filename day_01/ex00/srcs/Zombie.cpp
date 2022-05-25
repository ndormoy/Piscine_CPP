#include "Zombie.hpp"

/*----------------------Constructeur-------------------*/

Zombie::Zombie(std::string name, std::string type)
{
	(void)type;
	// std::cout << "Zombie Constructor called" << std ::endl;
	std::cout << name;
	announce();
	
}

/*----------------------Destructeur--------------------*/

Zombie::~Zombie(void)
{
	std::cout << "Zombie Destructor called, ";
	std::cout << this->_name << " has been destroyed" << std::endl;

}

/*----------------------GETTERS------------------------*/



/*----------------------FUNCTIONS----------------------*/

void	Zombie::announce(void)
{
	std::cout << ":BraiiiiiiinnnzzzZ..." << std::endl;
}