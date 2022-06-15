#ifndef INTERN_H
#define INTERN_H

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void); // default constructor
		Intern(const Intern &src); // copy constructor
		~Intern(void);

		Intern	&operator=(const Intern &src);

		Form	*makeForm(std::string name_form, std::string target);
		Form	*makeShrubbery(std::string target);
		Form	*makeRobotomy(std::string target);
		Form	*makePresidential(std::string target);
};

#endif