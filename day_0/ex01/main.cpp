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

void	Phonebook::find_contact(Phonebook instance, std::string user_name)
{
	int	store;

	store = instance.number;
	std::cin >> user_name;
	for(int i = 0; i < NB_CONTACT; i++)
	{
		instance.number = i;
		if (user_name.compare(fiche[instance.number].get_first_name()) == 0)
		{
			instance.display_contact();
			instance.number = store;
			return ;
		}	
	}
	std::cout << "The contact is not in my repertory... Sorry" << std::endl;
}

int	main()
{
	std::string	action;
	std::string	user_name;
	Phonebook	instance;

	while (42)
	{
		std::cout << "Start loop" << std::endl;
		if (instance.number == 2)
			instance.number = 0;
		std::cout << "You can : <ADD> <SEARCH> <EXIT> <SHOW>" <<std::endl;
		std::cin >> action;
		if (action.compare("EXIT") == 0)
			return (0);
		if (action.compare("ADD") == 0)
		{
			std::cout << "number = " << instance.number << std::endl;
			instance.set_contact();
			instance.number++;
		}
		if (action.compare("SEARCH") == 0)
			instance.find_contact(instance, user_name);
		if (action.compare("SHOW") == 0)
			instance.show_all(instance);
	}
	std::cout << "loooooool" << std::endl;
	return (0);
}
