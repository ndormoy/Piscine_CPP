#include "Intern.hpp"

/*-------------------------------Constructor-------------------------------------------*/

Intern::Intern(void)
{

}

Intern::Intern(Intern const &src)
{
	*this = src;
}

/*------------------------------Destructor--------------------------------------------*/

Intern::~Intern(void)
{

}

/*------------------------------Overload operator-------------------------------------*/

Intern	&Intern::operator=(const Intern &src)
{
	return (*this);
}

/*------------------------------Functions--------------------------------------------*/

Form	*makeForm(std::string name_form, std::string target)
{
	
}