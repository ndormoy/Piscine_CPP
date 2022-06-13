#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	noe("nd", -50);
	}
	catch (std::exception &error)
	{
		std::cerr << error.what() << std::endl;
	}
	try
	{
		Bureaucrat	poulet("poul", 151);
	}
	catch (std::exception &error)
	{
		std::cerr << error.what() << std::endl;
	}
	try
	{
		Bureaucrat	superman("superman", 1);
		std::cout << superman << std::endl;
		superman.increment();
	}
	catch (std::exception &error)
	{
		std::cerr << error.what() << std::endl;
	}
	try
	{
		Bureaucrat	woodman("woodman", 150);
		woodman.decrement();
	}
	catch (std::exception &error)
	{
		std::cerr << error.what() << std::endl;
	}

	std::cout << "--------------\n" << std::endl;

	Bureaucrat	ass_op("ass_op", 2);
	Bureaucrat	pouet = ass_op;
	Bureaucrat	copy(ass_op);
	std::cout << ass_op << std::endl;
	std::cout << pouet << std::endl;
	std::cout << copy << std::endl;

	std::cout << "--------------\n" << std::endl;

	Bureaucrat	empty;
	std::cout << empty << std::endl;
	return (0);
}