#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap cara("carapuce");
	ScavTrap sala("salameche");

	cara.getInfo();
	sala.getInfo();
	std::cout << "\n------------\n\n3... 2... 1... FIGHT !\n" << std::endl;
	cara.attack("salameche");
	sala.takeDamage(20);
	sala.beRepaired(5);
	cara.getInfo();
	sala.getInfo();
	cara.attack("salameche");
	sala.takeDamage(20);
	cara.guardGate();
	cara.attack("salameche");
	sala.takeDamage(20);
	cara.attack("salameche");
	sala.takeDamage(20);
	cara.attack("salameche");
	sala.takeDamage(20);
	cara.attack("salameche");
	sala.takeDamage(20);

	std::cout << "\nResultat du match :\n" << std::endl;
	cara.getInfo();
	sala.getInfo();
	return (0);
}