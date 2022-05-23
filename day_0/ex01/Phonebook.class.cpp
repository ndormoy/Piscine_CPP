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

/*Va afficher le nombre d'espace necessaire pour que tout 
soit aligne a droite*/

void	display_spaces(int nb)
{
	for (int i = 0; i < nb; i++)
		std::cout << " ";
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
			std::cout << ".";
			break ;
		}
		std::cout << column[i];
	}
	std::cout << '|';
}

/*Va afficher une ligne avec les informations d'un contact*/

void	Phonebook::display_contact(void)
{
	std::cout << "     index|first name| last name| nick name|" << std::endl;
	std::cout << "         " << this->number << '|';
	display_column(this->fiche[this->number].get_first_name());
	display_column(this->fiche[this->number].get_last_name());
	display_column(this->fiche[this->number].get_nick_name());
	std::cout << "" << std::endl;
}
