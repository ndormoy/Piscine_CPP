#include "Harl.hpp"

/*-------------------Constructeur--------------------*/

Harl::Harl(void)
{
}

/*-------------------Destructor----------------------*/

Harl::~Harl(void)
{
}

/*-------------------PRIVATE FUNCTIONS---------------*/

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

/*-------------------PUBLIC FUNCTIONS----------------*/

void	Harl::complain(std::string level)
{
	std::string str[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(str[i]) == 0)
		{
			switch(i)
			{
				case 0: this->_debug();
				__attribute__ ((fallthrough));
				case 1: this->_info();
				__attribute__ ((fallthrough));
				case 2: this->_warning();
				__attribute__ ((fallthrough));
				case 3: this->_error();
				break ;
			}
			return ;
		}
	}
	std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
}
