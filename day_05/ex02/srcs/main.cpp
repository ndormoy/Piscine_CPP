#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	patrice("patoche", 2);
	ShrubberyCreationForm	kinder("kinder");

	try
	{
		kinder.execute(patrice);
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		patrice.signForm(kinder);
		kinder.execute(patrice);
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	return (0);
}