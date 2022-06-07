#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void); // default constructor
		FragTrap(std::string name); // constructor
		FragTrap(FragTrap const &src); // copy constructor
		~FragTrap(void); // destructor
		FragTrap	&operator=(FragTrap const &src); // assignment operator
		void	highFivesGuys(void); // Special capacity
};

#endif