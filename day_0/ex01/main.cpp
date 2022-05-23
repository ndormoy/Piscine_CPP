#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

void	Phonebook::show_all(Phonebook instance)
{
	int	store;

	store = instance.number;
	for (int i = 0; i < NB_CONTACT; i++)
	{
		instance.number = i;
		instance.display_contact();
	}
	instance.number = store;
}

void	Phonebook::find_contact(Phonebook instance)
{
	int	store;
	int	index;

	store = instance.number;
	std::cin >> index;
	for(int i = 0; i < NB_CONTACT; i++)
	{
		instance.number = i;
		if (i == index)
		{
			instance.display_contact();
			instance.number = store;
			return ;
		}	
	}
	std::cout << "Contact does not exist ... Sorry" << std::endl;
}

int	main()
{
	Phonebook	instance;
	std::string	action;

	while (42)
	{
		if (instance.number == 2)
			instance.number = 0;
		std::cout << "You can : <ADD> <SEARCH> <EXIT> <SHOW>" <<std::endl;
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
		if (action.compare("SHOW") == 0)
			instance.show_all(instance);
	}
	return (0);
}
