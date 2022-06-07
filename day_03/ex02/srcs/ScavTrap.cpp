#include "ScavTrap.hpp"

/*---------------Constructor--------------*/

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Constructor called, goodbye " << _name << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_name = "No name";

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called, hi " <<  _name << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{

}

/*--------------Destructor-----------------*/

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called, see you soon " << _name << std::endl;
}

/*--------------Overload operator----------*/

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

/*--------------Functions------------------*/

void ScavTrap::guardGate(void)
{
	if (_energy_points <= 0)
		std::cout << "Your energy points are too low :(((( ... Go to a Pokemon Center " << _name << std::endl;
	else if (_hit_points <= 0)
		std::cout << "Your hit points are too low :(((( ... Go to a Pokemon Center " << _name << std::endl;
	else
	{
		std::cout << ">>>ScavTrap " << _name << " turn in Gate Keeper mod<<<" << std::endl;
		_energy_points--;
	}	
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "You don't have enough energy points or hit points to do anything :-'((, sorry " << _name << std::endl;
}