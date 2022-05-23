#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include "colors.hpp"

void	Phonebook::find_contact(Phonebook instance)
{
	int	store;
	int	index;

	std::cout << BGRN "Index contact : " CRESET;
	store = instance.number;
	std::cin >> index;
	for(int i = 0; i < NB_CONTACT; i++)
	{
		instance.number = i;
		if (i == index && i < store)
		{
			instance.display_contact();
			instance.number = store;
			return ;
		}	
	}
	std::cout << BRED "Contact does not exist ... Sorry" CRESET << std::endl;
}

int	main()
{
	Phonebook	instance;
	std::string	action;

	while (42)
	{
		if (instance.number == 2)
			instance.number = 0;
		std::cout << BYEL "You can : <ADD> <SEARCH> <EXIT> <SHOW>" CRESET <<std::endl;
		std::cout << CYN "Phonebook $> " CRESET;
		std::cin >> action;
		if (action.compare("EXIT") == 0)
			return (0);
		if (action.compare("ADD") == 0)
		{
			instance.set_contact();
			instance.number++;
		}
		if (action.compare("SEARCH") == 0)
			instance.find_contact(instance);
	}
	return (0);
}
