#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat				nullos("nullos", 150);
	Bureaucrat				patrice("patoche", 2);
	Form	*my_form;
	Intern	corentin;

	my_form = corentin.makeForm("mdr", "form_a");

	my_form = corentin.makeForm("shrubbery creation", "pizza");
	std::cout << *my_form << std::endl;
	delete(my_form);

	my_form = corentin.makeForm("robotomy request", "exterminate");
	std::cout << *my_form << std::endl;
	delete(my_form);

	my_form = corentin.makeForm("presidential pardon", "sorry bro");
	std::cout << *my_form << std::endl;
	delete(my_form);
	return (0);
}