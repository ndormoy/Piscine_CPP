#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	bernard("bernard", 50);
	Bureaucrat	jean_francois("jean_francois", 5);
	Form		loi("49/3", 20, 15);

	std::cout << bernard << std::endl;
	std::cout << jean_francois << std::endl;
	std::cout << loi << std::endl;
	bernard.signForm(loi);
	jean_francois.signForm(loi);
	std::cout << loi << std::endl;
}