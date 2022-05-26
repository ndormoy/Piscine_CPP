#include "Zombie.hpp"

int main()
{
	Zombie	*bill;
	Zombie	*larmina;

	bill = newZombie("bill");
	larmina = newZombie("larmina");
	randomChump("heap_zomb");
	delete(bill);
	delete(larmina);
	return (0);
}