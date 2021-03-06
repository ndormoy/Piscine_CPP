#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void); // default constructor
		ScavTrap(std::string name); // constructor
		ScavTrap(ScavTrap const &src); // copy constructor
		~ScavTrap(void); // destructor
		ScavTrap	&operator=(ScavTrap const &src); //assignment operator
		void		guardGate(void);
		void		attack(const std::string& target);
};

#endif