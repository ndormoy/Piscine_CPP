#include "ScavTrap.hpp"

/*---------------Constructor--------------*/

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " Constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_name = "No name";

}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << " Constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_name = name;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{

}

/*--------------Destructor-----------------*/

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
}

/*--------------Overload operator----------*/

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{

	this->_name = src._name;
	return (*this);
}

/*--------------Functions------------------*/

void ScavTrap::guardGate(void)
{
	if (_energy_points <= 0)
		std::cout << "Your energy points are too low :(((( ... Go to a Pokemon Center !!" << std::endl;
	else if (_hit_points <= 0)
		std::cout << "Your hit points are too low :(((( ... Go to a Pokemon Center !!" << std::endl;
	else
		std::cout << "ScavTrap turn in Gate Keeper mod" << std::endl;
}