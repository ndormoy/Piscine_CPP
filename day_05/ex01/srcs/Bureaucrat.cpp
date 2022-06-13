#include "Bureaucrat.hpp"

/*-------------Constructor--------------*/

Bureaucrat::Bureaucrat(void) : _name("DEFAULT")
{
	_grade = 100;
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade <= 0)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	_grade = grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Bureaucrat COPY constructor called" << std::endl;
	*this = src;
}

/*-------------Destructor--------------*/

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

/*-------------Getters-----------------*/

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

/*-------------Setters-----------------*/

/*Quand on throw une classe qui herite de std::exception
ca va cherche tout seul la fonction What et la retourner*/

void			Bureaucrat::increment(void)
{
	if (_grade <= 1)
		throw (GradeTooHighException());
	_grade--;
}

void			Bureaucrat::decrement(void)
{
	if (_grade >= 150)
		throw (GradeTooLowException());
	_grade++;
}

/*-------------Overload operator--------*/

Bureaucrat		&Bureaucrat::operator=(const Bureaucrat &src)
{
	std::string &tmp_name = const_cast<std::string &> (this->_name);
	this->_grade = src._grade;
	tmp_name = src._name;//A voir si on doit implementer le nom
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &src)
{
	std::cout << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}

/*-------------Functions----------------*/

void			Bureaucrat::signForm(Form &my_form)
{
	try
	{
		my_form.beSigned(*this);
			std::cout << _name << " signed " << my_form.getName();
	}
	catch (std::exception const &e)
	{
		std::cout << _name << " couldn't sign " << my_form << " because " << e.what() << std::endl;;
	}
}

/*-------------Nested class-------------*/

const char		*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error, the grade is too high");
}

const char		*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error, the grade is too low");
}
