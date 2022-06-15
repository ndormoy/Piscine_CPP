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
	(void)src;
	return (*this);
}

/*------------------------------Functions--------------------------------------------*/

Form	*Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string name_form, std::string target)
{
	std::string	str[4] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form	*(Intern::*fct[4])(std::string) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};

	for (int i = 0; i < 3; i++)
	{
		if (str[i].compare(name_form) == 0)
		{
			std::cout << "Intern creates " << target << std::endl;
			return ((this->*fct[i])(target));
		}
			
	}
	std::cerr << name_form << " doesn't exist..." << std::endl;
	return (NULL);
}