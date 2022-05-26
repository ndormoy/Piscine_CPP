#ifndef HUMANA_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		std::string getNameA(void) const;
		void	setNameA(std::string name);
		void	attack(void);
	private:
		std::string _name;
		Weapon &_my_weapon;
};


#endif