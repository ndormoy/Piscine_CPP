#include "ClapTrap.hpp"

int main()
{
	ClapTrap magi("magicarpe");
	ClapTrap bulb("bulbizarre");

	magi.GetInfo();
	bulb.GetInfo();
	std::cout << "\n------------\n\n3... 2... 1... FIGHT !\n" << std::endl;
	magi.attack("bulbizarre");
	bulb.takeDamage(0);
	bulb.beRepaired(5);
	std::cout << "\nResultat du match :\n" << std::endl;
	magi.GetInfo();
	bulb.GetInfo();
	return (0);
}