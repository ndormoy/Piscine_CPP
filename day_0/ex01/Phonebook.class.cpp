#include "Phonebook.class.hpp"

/* Constructeur */

Phonebook::Phonebook(void)
{
	std::cout << "Phonebook Constructor called" << std ::endl;
}

/* Destructeur */

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook Destructor called" << std::endl;
}

/* Getters */

Contact Phonebook::get_contact(void)
{
	std::cout << "Phone number = " << this->fiche.get_phone_number() << std::endl;
	return (this->fiche);
}

/* Setters */

void	Phonebook::set_contact(std::string str)
{
	fiche.set_phone_number(str);
}