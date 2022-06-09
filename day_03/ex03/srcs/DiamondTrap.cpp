#include "DiamondTrap.hpp"

/*--------------Constructor----------------*/

DiamondTrap::DiamondTrap(void) : _name(ClapTrap::_name)
{
	ClapTrap::_name.append("_clap_name");
	std::cout << "DiamondTrap Constructor called, heyy " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	ClapTrap::_name.append("_clap_name");
	std::cout << "DiamondTrap Constructor called, heyy " << _name << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	*this = src;
}

/*--------------Destructor-----------------*/

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called, byyyyyyyyyyye " << _name << std::endl;
}

/*--------------Overload operator----------*/

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

/*--------------Functions------------------*/

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name = " << _name << std::endl;
	std::cout << "My sub name = " << ClapTrap::_name << std::endl;
}