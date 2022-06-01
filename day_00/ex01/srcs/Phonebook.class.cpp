#include "Phonebook.class.hpp"
#include <stdlib.h>

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

std::string	set_str_contact(std::string str, std::string sentence)
{
	do
	{
		std::cout << BGRN << sentence << CRESET;
		std::getline(std::cin, str);
		if (std::cin.eof() == true)
		{
			std::cout << BRED "Ctrl D" CRESET << std::endl;
			exit(1);
		}
	} while (str.empty());
	return (str);
}

void	Phonebook::set_contact(void)
{
	std::string	str;

	fiche[number].set_first_name(set_str_contact(str, "First name : "));
	fiche[number].set_last_name(set_str_contact(str, "Last name : "));
	fiche[number].set_nick_name(set_str_contact(str, "Nick name : "));
	fiche[number].set_darkest_secret(set_str_contact(str, "Darkest secret : "));
	fiche[number].set_phone_number(set_str_contact(str, "Phone number : "));
}

/*---------------------DISPLAY--------------------------------*/

/*Va afficher le nombre d'espace necessaire pour que tout 
soit aligne a droite*/

void	display_spaces(int nb)
{
	for (int i = 0; i < nb; i++)
		std::cout << GRN " " CRESET;
}

/*Va afficher une colonne d'un contact (Name ...)*/

void	display_column(std::string column)
{
	int	size = column.size();
	int	spaces = 10 - size;

	if (size < 10)
		display_spaces(spaces);
	for (int i = 0; i < 10 - spaces; i++)
	{
		if (i == 9 && size > 10)
		{
			std::cout << GRN "." CRESET;
			break ;
		}
		std::cout << GRN << column[i] << CRESET;
	}
	std::cout << GRN "|" CRESET;
}

/*Va afficher une ligne avec les informations d'un contact*/

void	Phonebook::display_contact(void)
{
	std::cout << std::setw(18) << BGRN "index|";
	std::cout << std::setw(11) << "first name|";
	std::cout << std::setw(11) << "last name|";
	std::cout << std::setw(15) << "nick name|" CRESET << std::endl;
	std::cout << GRN "         " << this->number << "|" CRESET;
	display_column(this->fiche[this->number].get_first_name());
	display_column(this->fiche[this->number].get_last_name());
	display_column(this->fiche[this->number].get_nick_name());
	std::cout << "" << std::endl;
}
