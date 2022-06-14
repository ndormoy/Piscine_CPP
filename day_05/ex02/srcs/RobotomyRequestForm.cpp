#include "RobotomyRequestForm.hpp"

/*-------------------------------Constructor-------------------------------------------*/

RobotomyRequestForm::RobotomyRequestForm(void) : Form("DEFAULT", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	(void)target;
}

/*------------------------------Destructor--------------------------------------------*/

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

/*------------------------------Overload operator-------------------------------------*/

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
		this->Form::operator=(src);
	return (*this);void		execute(Bureaucrat const &executor);
}

/*------------------------------Functions--------------------------------------------*/

void			RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	(void)executor;
}