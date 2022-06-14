#include "PresidentialPardonForm.hpp"

/*-------------------------------Constructor-------------------------------------------*/

PresidentialPardonForm::PresidentialPardonForm(void) : Form("DEFAULT", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src)
{

}


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("DEFAULT", 25, 5)
{
	(void)target;
}

/*------------------------------Destructor--------------------------------------------*/

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

/*------------------------------Overload operator-------------------------------------*/

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
		this->Form::operator=(src);
	return (*this);
}

/*------------------------------Functions---------------------------------------------*/

void	PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	(void)executor;
}