#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nick_name(void);
		std::string get_darkest_secret(void);
		std::string	get_phone_number(void);
		void	set_first_name(std::string name);
		void	set_last_name(std::string last_name);
		void	set_nick_name(std::string nick_name);
		void	set_darkest_secret(std::string secret);
		void	set_phone_number(std::string num);
	private:
		std::string _first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_darkest_secret;
		std::string	_phone_number;
};

#endif