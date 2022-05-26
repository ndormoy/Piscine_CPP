#include "HumanB.hpp"
#include "Weapon.hpp"

/*--------------------Constructeur----------------*/

HumanB::HumanB(std::string name) : _name(name)
{
}

/*--------------------Destructeur-----------------*/

HumanB::~HumanB(void)
{
}

/*--------------------GETTERS---------------------*/

std::string HumanB::getNameB(void) const
{
	return (this->_name);
}

/*--------------------SETTERS---------------------*/

void	HumanB::setNameB(std::string name)
{
	this->_name = name;
}

/*On envoi un ref en argument, mais contrairement a 
HumanA notre _my_weapon est un pointeur, on peut donc
le changer et le faire aussi pointer sur NULL quand on
ne veut pas avoir d'armes*/

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_my_weapon = &weapon;
}

/*--------------------FUNCTIONS-------------------*/

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_my_weapon->getType() << std::endl;
}