#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void); // default constructor
		RobotomyRequestForm(const RobotomyRequestForm &src); // copy constructor
		RobotomyRequestForm(std::string target); // constructor
		~RobotomyRequestForm(void); // destructor

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &src); // Overload operator

		void	Robotomise(std::string target);

		void		execute(Bureaucrat const &executor) const;

};

#endif