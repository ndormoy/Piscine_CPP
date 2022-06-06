#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(std::string Name);
		~ClapTrap(void);
		void takeDamage(unsigned int amount);
		void attack(const std::string& target);
		void beRepaired(unsigned int amount);
		void GetInfo(void);
	private:
		int _hit_points;
		int _energy_points;
		int _attack_damage;
		std::string _name;
};

#endif