#include "Phonebook.class.hpp"
#include "Contact.class.hpp"


void	Phonebook::find_contact(Phonebook instance, std::string name)
{
	(void)name;

	for(int i = 0; i < NB_CONTACT; i++)
	{
		instance.number = i;
		//std::cout << "hehe -> "<< fiche[instance.number].get_first_name() << std::endl;
		
		if (name.compare(fiche[instance.number].get_first_name()) == 0)
			return ;
	}
}

int	main()
{
	std::string	str;
	std::string	name;
	Phonebook	instance;
	int	store;

	while (42)
	{
		if (instance.number == 2)
			instance.number = 0;
		std::cout << "You can : <ADD> <SEARCH> <EXIT>" <<std::endl;
		std::cin >> str;
		if (str.compare("EXIT") == 0)
			return (0);
		if (str.compare("ADD") == 0)
		{
			std::cout << "number = " << instance.number << std::endl;
			instance.set_contact();
			instance.number++;
		}
		if (str.compare("SEARCH") == 0)
		{
			store = instance.number;
			std::cin >> name;
			instance.find_contact(instance, name);
			instance.display_contact();
			//instance.get_contact();
			instance.number = store;
		}
	}

	return (0);
}
