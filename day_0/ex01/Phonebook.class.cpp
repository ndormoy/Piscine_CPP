#include "Phonebook.class.hpp"

/*----------------------Constructeur--------------------------*/

Phonebook::Phonebook(void)
{
	// std::cout << "Phonebook Constructor called" << std ::endl;
	number = 0;
}

/*----------------------Destructeur---------------------------*/

Phonebook::~Phonebook(void)
{
	// std::cout << "Phonebook Destructor called" << std::endl;
}

/*----------------------Getters-------------------------------*/

Contact Phonebook::get_contact(void)
{
	return (this->fiche[number]);
}

/*----------------------Setters-------------------------------*/

void	Phonebook::set_contact(void)
{
	std::string	str;

	std::cout << "What's your first name ?" << std::endl;
	std::cin >> str;
	fiche[number].set_first_name(str);
	std::cout << "What's your last name ?" << std::endl;
	std::cin >> str;
	fiche[number].set_last_name(str);
	std::cout << "What's your nick name ?" << std::endl;
	std::cin >> str;
	fiche[number].set_nick_name(str);
	std::cout << "What's your darkest secret ?" << std::endl;
	std::cin >> str;
	fiche[number].set_darkest_secret(str);
	std::cout << "What's your phone number ?" << std::endl;
	std::cin >> str;
	fiche[number].set_phone_number(str);
}

/*---------------------DISPLAY--------------------------------*/

void	/* Phonebook:: */display_column(std::string column)
{
	std::cout << "Column = " << column << std::endl;
}

void	Phonebook::display_contact(void)
{
	std::cout << "     index|first name| last name| nick name|" << std::endl;
	std::cout << "first name = " << std::endl;
	display_column(this->fiche[this->number].get_first_name());
	std::cout << "last name = " << std::endl;
	display_column(this->fiche[this->number].get_last_name());
	std::cout << "nick name = " << std::endl;
	display_column(this->fiche[this->number].get_nick_name());
	// std::cout << "darkest secret = " << this->fiche[this->number].get_darkest_secret() << std::endl;
	// std::cout << "Phone number = " << this->fiche[this->number].get_phone_number() << std::endl;
}

/* void	Phonebook::display_contact(void)
{
	std::cout << "     index|first name| last name| nick name|" << std::endl;
	std::cout << "first name = " << this->fiche[this->number].get_first_name() << std::endl;
	std::cout << "last name = " << this->fiche[this->number].get_last_name() << std::endl;
	std::cout << "nick name = " << this->fiche[this->number].get_nick_name() << std::endl;
	std::cout << "darkest secret = " << this->fiche[this->number].get_darkest_secret() << std::endl;
	std::cout << "Phone number = " << this->fiche[this->number].get_phone_number() << std::endl;
} */