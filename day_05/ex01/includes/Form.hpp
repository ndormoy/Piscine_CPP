#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Form;

#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(void); // default constructor
		Form(const Form &src); // copy constructor
		Form(std::string name, int to_sign, int to_execute);
		~Form(); // destructor

		Form &operator=(const Form &src); // assignment operator

		std::string	getName(void) const;
		bool		getSigned(void) const;
		const int	&getToSign(void) const;
		const int	&getToExecute(void) const;

		void		beSigned(Bureaucrat &src);

		class	GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		const int			_to_sign;
		const int			_to_execute;
};

std::ostream	&operator<<(std::ostream &out, Form const &src);

#endif