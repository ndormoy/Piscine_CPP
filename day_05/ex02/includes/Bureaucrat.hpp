#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat;

#include "Form.hpp"

class	Bureaucrat
{
	public:
		Bureaucrat(void); // default constructor
		Bureaucrat(std::string name, int grade); // constructor
		Bureaucrat(Bureaucrat const &src); // copy constructor
		virtual	~Bureaucrat(void); // destructor

		Bureaucrat &operator=(const Bureaucrat &src); //Overload operator

		std::string	getName(void) const;
		int	getGrade(void) const;

		void	increment(void);
		void	decrement(void);
		void	signForm(Form &my_form);
		void	executeForm(Form const &form) const;

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual	const char *what(void) const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual	const char *what(void) const throw();
		};

	private:
		const	std::string	_name;
		int	 	_grade;
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &src);

#endif