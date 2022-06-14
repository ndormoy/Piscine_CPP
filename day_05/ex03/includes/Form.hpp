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
		virtual	~Form(); // destructor

		Form &operator=(const Form &src); // assignment operator

		std::string	getName(void) const; // Getter to have name
		bool		getSigned(void) const; // is the for signed ?
		const int	&getToSign(void) const; // Grade mini to sign the form
		const int	&getToExecute(void) const; //Grade mini to execute the form

		void		beSigned(Bureaucrat &src);
		virtual	void		execute(Bureaucrat const &executor) const = 0;

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual	const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual	const char *what() const throw();
		};
		class	FormNotSigned : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		const int			_to_sign;
		const int			_to_execute;
};

std::ostream	&operator<<(std::ostream &out, Form const &src);

#endif