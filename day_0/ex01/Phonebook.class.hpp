#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "colors.hpp"

#define NB_CONTACT 8

class	Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		Contact	get_contact(void);
		void	set_contact(void);
		void	find_contact(Phonebook instance);
		void	display_contact(void);
		int		number;
	private:
		Contact fiche[NB_CONTACT];
};

#endif
