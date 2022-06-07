#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap tort("tortank");
	FragTrap drac("dracaufeu");

	tort.getInfo();
	drac.getInfo();
	std::cout << "\n------------\n\n3... 2... 1... FIGHT !\n" << std::endl;
	tort.attack("dracaufeu");
	drac.takeDamage(20);
	drac.beRepaired(5);
	tort.getInfo();
	drac.getInfo();
	tort.attack("dracaufeu");
	drac.takeDamage(20);
	tort.highFivesGuys();
	tort.attack("dracaufeu");
	drac.takeDamage(20);
	tort.attack("dracaufeu");
	drac.takeDamage(20);
	tort.attack("dracaufeu");
	drac.takeDamage(20);
	tort.attack("dracaufeu");
	drac.takeDamage(20);
	drac.attack("tortank");

	std::cout << "\nResultat du match :\n" << std::endl;
	tort.getInfo();
	drac.getInfo();
	return (0);
}