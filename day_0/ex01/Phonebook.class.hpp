#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include "Contact.class.hpp"

#define NB_CONTACT 8

class	Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		Contact	get_contact(void);
		//void	set_contact(std::string str);
		void	set_contact(void);
	private:
		Contact fiche;
};

#endif
