#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void); // default constructor
		DiamondTrap(DiamondTrap const &src); // copy constructor
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		DiamondTrap	&operator=(DiamondTrap const &src); // assignment operator
		void	whoAmI(void);
		using ScavTrap::attack;
	private:
		std::string	_name;
};

#endif