#include "Zombie.hpp"

int main()
{
	Zombie	*bill;
	Zombie	*larmina;

	bill = newZombie("bill");
	bill->announce();
	larmina = newZombie("larmina");
	larmina->announce();
	randomChump("heap_zomb");
	delete(bill);
	delete(larmina);
	return (0);
}