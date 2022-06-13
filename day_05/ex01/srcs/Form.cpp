#include "Form.hpp"

/*-------------Constructor--------------*/

Form::Form(void) : _name("DEFAULT"), _signed(false), _to_sign(150), _to_execute(150)
{
	std::cout << "Form DEFAULT constructor called" << std::endl;
}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed), _to_sign(src._to_sign), _to_execute(src._to_sign)
{
	std::cout << "Form COPY constructor called" << std::endl;
}

Form::Form(std::string name, int to_sign, int to_execute) : _name(name), _to_sign(to_sign), _to_execute(to_execute)
{
	std::cout << "Form constructor called" << std::endl;
}

/*-------------Destructor--------------*/

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
}

/*-------------Getters-----------------*/

std::string		Form::getName() const
{
	return (this->_name);
}

bool			Form::getSigned() const
{
	return (this->_signed);
}

const int		&Form::getToSign() const
{
	return (this->_to_sign);
}

const int		&Form::getToExecute() const
{
	return (this->_to_execute);
}
/*-------------Setters-----------------*/

/*-------------Overload operator--------*/

Form			&Form::operator=(const Form &src)
{
	std::string	&tmp_name = const_cast <std::string &> (this->_name);
	int			&tmp_to_sign = const_cast <int &> (this->_to_sign);
	int			&tmp_to_execute = const_cast <int &> (this->_to_execute);

	tmp_name = src._name;
	tmp_to_sign = src._to_sign;
	tmp_to_execute = src._to_execute;
	this->_signed = src._signed;	
}

std::ostream&	operator<<(std::ostream &out, Form const &src)
{
	std::cout << "The form " << src.getName() << "need " << src.getToSign() << " to be sign and " << src.getToExecute() << " to be execute";
	if (src.getSigned() == true)
		std::cout << "The form is signed." << std::endl;
	else
		std::cout << "The form is not signed." << std::endl;
}

/*-------------Functions----------------*/

void			Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > _to_sign)
		throw (GradeTooLowException());
	else
		_signed = true;
}	

/*-------------Nested class-------------*/

const char		*Form::GradeTooHighException::what() const throw()
{
	std::cout << "Error, this is to high :/" << std::endl;
}

const char		*Form::GradeTooLowException::what() const throw()
{
	std::cout << "Error, this is to low :(" << std::endl;
}