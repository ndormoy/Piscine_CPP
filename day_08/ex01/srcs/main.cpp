#include "Span.hpp"

int main()
{
	try
	{
		Span	spanito(11000);
		spanito.addMultipleNumber(0, 10000);
		spanito.addNumber(-50000);
		std::cout << spanito.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------------------------------" << std::endl;
	try
	{
		Span	spanito(5);
		spanito.addNumber(6);
		spanito.addNumber(3);
		spanito.addNumber(17);
		spanito.addNumber(9);
		spanito.addNumber(11);
		std::cout << spanito.shortestSpan() << std::endl;
		std::cout << spanito.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------------------------------" << std::endl;
	try
	{
		Span	spanito(5);
		spanito.addMultipleNumber(5, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	spanito(5);
		spanito.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	
}