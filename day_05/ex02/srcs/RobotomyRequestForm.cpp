#include "RobotomyRequestForm.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*-------------------------------Constructor-------------------------------------------*/

RobotomyRequestForm::RobotomyRequestForm(void) : Form("DEFAULT", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{

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

void			RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::cout << "grade = " << executor.getGrade() << " | ToExecute = " << this->getToExecute() << std::endl;
	if (this->getSigned() == false)
		throw(FormNotSigned());
	else if (executor.getGrade() > this->getToExecute())
		throw(GradeTooLowException());
	std::cout << "viiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiis vis vis vis vis viiiiiiiis" << std::endl;
	srand (time(NULL));
	if (rand()%2 == 0)
		std::cout << this->getName() << " has been robotomise " << std::endl;
	else
		std::cout << "the operation failed" << std::endl;
}