#include "Weapon.hpp"

/*--------------------Constructeur----------------*/

Weapon::Weapon(std::string w_type) : _type(w_type)
{
	//_type = w_type;
}

/*--------------------Destructeur-----------------*/

Weapon::~Weapon(void)
{

}

/*--------------------GETTERS---------------------*/

std::string	Weapon::getType(void) const
{
	return (this->_type);
}

/*--------------------SETTERS---------------------*/

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}