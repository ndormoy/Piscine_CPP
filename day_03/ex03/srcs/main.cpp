#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	meta("metamorphe");
	DiamondTrap	mew("mew");
	DiamondTrap meta_test = meta;
	DiamondTrap	other_cpy(meta);


	std::cout << "\n------------\n\n3... 2... 1... FIGHT !\n" << std::endl;

	meta.getInfo();
	meta.whoAmI();
	meta.highFivesGuys();
	meta.guardGate();

	meta_test.getInfo();
	meta_test.whoAmI();

	other_cpy.getInfo();
	other_cpy.whoAmI();
	
	mew.getInfo();
	mew.whoAmI();
	mew.attack("metamorphe");
	meta.takeDamage(30);
	std::cout << "\nResultat du match :\n" << std::endl;
	mew.getInfo();
	meta.getInfo();
	return (0);
}