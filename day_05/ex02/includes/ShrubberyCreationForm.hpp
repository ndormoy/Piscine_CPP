#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void); // default constructor
		ShrubberyCreationForm(const ShrubberyCreationForm &src); // copy constructor
		ShrubberyCreationForm(std::string target); // constructor
		~ShrubberyCreationForm(void); // destructor

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src); // Overload operator

		void	create_ascii(std::string target);

		void		execute(const Bureaucrat &executor);

		class	PbFile: public std::exception
		{
			public:
				virtual	const char *what() const throw();
		};
};

#endif