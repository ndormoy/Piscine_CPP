#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		std::string getNameB(void) const;
		void	setNameB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack(void);

	private:
		std::string	_name;
		Weapon	*_my_weapon;
};

#endif