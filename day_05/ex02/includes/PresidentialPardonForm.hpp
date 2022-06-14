#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void); // default constructor
		PresidentialPardonForm(const PresidentialPardonForm &src); // copy constructor
		PresidentialPardonForm(std::string target); // constructor
		~PresidentialPardonForm(void); // destructor

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &src); // Overload operator

		void	pardon(std::string target);

		void		execute(const Bureaucrat &executor);
};

#endif