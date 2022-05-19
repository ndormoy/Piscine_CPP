#include "Contact.class.hpp"

/* Constructeur */

Contact::Contact(void)
{
	std::cout << "Contact Constructor called" << std::endl;
}

/* Destructeur */

Contact::~Contact(void)
{
	std::cout << "Contact Destructor called" << std::endl;
}

/*Getters*/

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

/*Setters*/

void	Contact::set_phone_number(std::string num)
{
	this->_phone_number = num;
}