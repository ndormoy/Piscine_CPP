#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include "colors.hpp"
#include <stdlib.h>

void	Phonebook::find_contact(Phonebook instance)
{
	std::string	str;
	char		*str_char;
	int			store;
	int			index;

	std::cout << BGRN "Index contact : " CRESET;
	store = instance.number;
	getline(std::cin,str);
	str_char = (char *)str.c_str();
	index = atoi(str_char);
	//index = std::atoi(str.data());
	if (index >= 0 && index < 8 && (str.size() == 1) && std::isdigit(str[0]))
	{
		for(int i = 0; i < NB_CONTACT; i++)
		{
			instance.number = i;
			if (i == index
				&& (instance.fiche[instance.number].get_first_name().empty() != true))
			{
				instance.display_contact();
				instance.number = store;
				return ;
			}	
		}
	}
	std::cout << BRED "Contact does not exist ... Sorry" CRESET << std::endl;
}

int	main()
{
	Phonebook	instance;
	std::string	action;

	std::cout << BYEL "You can : <ADD> <SEARCH> <EXIT>" CRESET <<std::endl;
	while (42)
	{
		if (instance.number == NB_CONTACT)
			instance.number = 0;
		
		std::cout << CYN "Phonebook $> " CRESET;
		getline(std::cin,action);
		if (std::cin.eof() == true)
		{
			std::cout << BRED "Ctrl D" CRESET << std::endl;
			return (0);
		}
		else if (action.compare("EXIT") == 0)
			return (0);
		else if (action.compare("ADD") == 0)
		{
			instance.set_contact();
			instance.number++;
		}
		else if (action.compare("SEARCH") == 0)
		{
			instance.find_contact(instance);
		}
		else
			std::cout << BYEL "You can : <ADD> <SEARCH> <EXIT>" CRESET <<std::endl;
	}
	return (0);
}
