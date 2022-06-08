#include "FragTrap.hpp"

/*--------------Constructor----------------*/

FragTrap::FragTrap(void)
{
	_name = "No name";
	std::cout << "FragTrap constructor called, hello " << _name << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

/*Les ": ClapTrap(name)" veut dire qu'on fait appel au constructeur
de ClapTrap en mettant name dedans. Car si on fait _name(name) 
ca ne marche pas ici parce que _name vient de ClapTrap*/

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called, hello " << _name << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{

}

/*--------------Destructor-----------------*/

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called, goodbye " << _name << std::endl;
}

/*--------------Overload operator----------*/

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

/*--------------Functions------------------*/

void	FragTrap::highFivesGuys(void)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << _name << " : Give me a high Five :-)" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << _name << " Don't have enough energy or hit points to do a beautiful High Five, So sad ... :-(" << std::endl;
}