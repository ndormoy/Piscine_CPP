#include "Contact.class.hpp"

/*----------------------Constructeur--------------------------*/

Contact::Contact(void)
{
	// std::cout << "Contact Constructor called" << std::endl;
}

/*----------------------Destructeur---------------------------*/

Contact::~Contact(void)
{
	// std::cout << "Contact Destructor called" << std::endl;
}

/*----------------------Getters-------------------------------*/

std::string Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string Contact::get_nick_name(void)
{
	return (this->_nick_name);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

/*----------------------Setters-------------------------------*/

void	Contact::set_first_name(std::string name)
{
	this->_first_name = name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::set_nick_name(std::string nick_name)
{
	this->_nick_name = nick_name;
}

void	Contact::set_darkest_secret(std::string secret)
{
	this->_darkest_secret = secret;
}

void	Contact::set_phone_number(std::string num)
{
	this->_phone_number = num;
}