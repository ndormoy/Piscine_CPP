#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string	get_phone_number(void);
		void	set_phone_number(std::string num);
	private:
		std::string	_phone_number;
};

#endif