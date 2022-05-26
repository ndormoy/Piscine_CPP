#include "Zombie.hpp"
#define NB_ZOMBIE 4

int main()
{
	Zombie	*all;
	(void)all;

	all = zombieHorde(NB_ZOMBIE, "clone");
	for (int i = 0; i < NB_ZOMBIE; i++)
	{
		std::cout << "zombie num : " << i << std::endl;
		all[i].announce();
	}
	delete [] all;
	return (0);
}