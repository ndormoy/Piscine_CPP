#include "ClapTrap.hpp"

/*--------------Constructor----------------*/

ClapTrap::ClapTrap(void)
{
	_name = "No name";
	std::cout << "Constructor called, welcome " << _name << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Constructor called, welcome " << _name << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
}

/*--------------Destructor-----------------*/

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called, bye bye " << _name << std::endl;
}

/*--------------Overload operator----------*/

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	this->_name = src._name;
	return (*this);
}

/*--------------Getters--------------------*/

void	ClapTrap::GetInfo(void)
{
	std::cout << this->_name << ":" << std::endl;
	std::cout << "hit point(s) = " << this->_hit_points << std::endl;
	std::cout << "energy point(s) = " << this->_energy_points << std::endl;
	std::cout << "attack damage = " << this->_attack_damage << std::endl;
}

/*--------------Setters--------------------*/

/*--------------Functions------------------*/

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
		std::cout << "You are already dead *_*" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " takes damage, he loses " << amount << " hit point(s)" << std::endl;
		this->_hit_points -= amount;
	}
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "You don't have enough energy points or hit points to do anything :-'((" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
		std::cout << "Your energy points are too low :(((( ... Go to a Pokemon Center !!" << std::endl;
	else if (this->_hit_points <= 0)
		std::cout << "Your hit points are too low :(((( ... Go to a Pokemon Center !!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " healing itself, he recover " << amount << " hit point(s)" << std::endl;
		this->_energy_points--;
	}
}