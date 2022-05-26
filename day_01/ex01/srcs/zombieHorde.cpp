#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*all;
	(void)all;
	(void)N;
	(void)name;

	all = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		all[i].set_name(name);
	}
	return (all);
}