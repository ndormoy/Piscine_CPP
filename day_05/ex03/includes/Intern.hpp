#ifndef INTERN_H
#define INTERN_H

#include "Bureaucrat.hpp"
#include "Form.hpp"

class	Intern
{
	public:
		Intern(void); // default constructor
		Intern(const Intern &src); // copy constructor
		~Intern(void);

		Intern	&operator=(const Intern &src);

		Form	*makeForm(std::string name_form, std::string target);
}

#endif