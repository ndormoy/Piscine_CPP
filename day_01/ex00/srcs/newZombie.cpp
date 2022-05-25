#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie	*new_zombie = new Zombie(name, "heap");
	
	return (new_zombie);
}
