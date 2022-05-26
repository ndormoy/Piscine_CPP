#include "HumanA.hpp"
#include "Weapon.hpp"

/*--------------------Constructeur----------------*/

/*Ici on assigne _name avec name et _my_weapon avec weapon,
on le fait par reference.
(On envoi deja une ref : &weapon, puis notre _my_weapon est aussi
une ref declaree dans la class.)*/

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _my_weapon(weapon)
{
	//std::cout << "HumanA constructor called" << std::endl;
}

/*--------------------Destructeur-----------------*/

HumanA::~HumanA(void)
{
	//std::cout << "HumanA destructor called" << std::endl;
}


/*--------------------GETTERS---------------------*/

std::string HumanA::getNameA(void) const
{
	return (this->_name);
}

/*--------------------SETTERS---------------------*/

void HumanA::setNameA(std::string name)
{
	this->_name = name;
}

/*--------------------FUNCTIONS-------------------*/

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _my_weapon.getType() << std::endl;
}