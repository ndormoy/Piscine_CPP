#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <unistd.h>

int main()
{
	Bureaucrat				nullos("nullos", 150);
	Bureaucrat				patrice("patoche", 2);
	Bureaucrat				jp("jp", 10);
	ShrubberyCreationForm	kinder("kinder");
	RobotomyRequestForm		bueno("bueno");
	PresidentialPardonForm	country("country");

	// try
	// {
	// 	kinder.execute(patrice);
	// }
	// catch (std::exception &error)
	// {
	// 	std::cout << error.what() << std::endl;
	// }
	// try
	// {
	// 	patrice.signForm(kinder);
	// 	kinder.execute(patrice);
	// }
	// catch (std::exception &error)
	// {
	// 	std::cout << error.what() << std::endl;
	// }
	// try
	// {
	// 	patrice.signForm(bueno);
	// 	for (int i = 0; i < 10; i++)
	// 	{
	// 		sleep(1);
	// 		bueno.execute(patrice);
	// 	}
			
	// }
	// catch (std::exception &error)
	// {
	// 	std::cout << error.what() << std::endl;
	// }	
	try
	{
		jp.signForm(country);
		country.execute(jp);
	}
	catch (std::exception &error)
	{
		std::cerr << error.what() << std::endl;
	}
	// try
	// {
	// 	patrice.signForm(country);
	// 	country.execute(patrice);
	// }
	// catch (std::exception &error)
	// {
	// 	std::cout << error.what() << std::endl;
	// }
	// try
	// {
	// 	nullos.signForm(bueno);
	// 	patrice.signForm(bueno);
	// 	patrice.executeForm(bueno);
	// }
	// catch (std::exception &error)
	// {
	// 	std::cout << error.what() << std::endl;
	// }
	return (0);
}