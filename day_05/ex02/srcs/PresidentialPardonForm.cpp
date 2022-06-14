#include "PresidentialPardonForm.hpp"

/*-------------------------------Constructor-------------------------------------------*/

PresidentialPardonForm::PresidentialPardonForm(void) : Form("DEFAULT", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src)
{

}


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{

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

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw(FormNotSigned());
	else if (executor.getGrade() > this->getToExecute())
		throw(GradeTooLowException());
	std::cout << "you have been forgiven by Zaphod Beeblebrox" << std::endl;
}