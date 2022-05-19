#include "Phonebook.class.hpp"
#include "Contact.class.hpp"


int	main()
{
	std::string	str;
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
			instance.number = 0;
			instance.get_contact();
			instance.number = 1;
			instance.get_contact();
			instance.number = store;
		}
	}

	return (0);
}
