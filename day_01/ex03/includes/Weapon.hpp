#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
	public:
		Weapon(std::string w_type);
		~Weapon(void);
		std::string	getType() const;
		void	setType(std::string);

	private:
		std::string	_type;
};

#endif