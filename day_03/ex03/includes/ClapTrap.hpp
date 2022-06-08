#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(void); // default constructor
		ClapTrap(std::string Name); // constructor with string
		ClapTrap(ClapTrap const &src); // Copy constructor
		~ClapTrap(void); // destructor
		ClapTrap &operator=(ClapTrap const &src); // assignment operator
		void	takeDamage(unsigned int amount);
		void	attack(const std::string& target);
		void	beRepaired(unsigned int amount);
		void	getInfo(void) const;
	protected:
		int _hit_points;
		int _energy_points;
		int _attack_damage;
		std::string _name;
};

#endif