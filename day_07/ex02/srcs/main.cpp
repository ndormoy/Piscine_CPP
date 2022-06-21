#include "Array.hpp"
#include "Array.tpp"

int main()
{
	
	try
	{
		int b = 5;
		Array<int> test(b);
		Array<int> pilou(0);
		for (int i = 0; i < b; i++)
		{
			std::cout << "Value = |" << test[i];
			std::cout << "| (Address = "<< &test.getT()[i] << ")" << std::endl;
		}
		std::cout << "Test deep copy" << std::endl;
		{
			Array<int>	deep_test = test;
			(void)deep_test;
		}
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		int ok = 10;
		Array<int> oui(ok);
		std::cout << "Before :" << std::endl;
		std::cout << oui[8] << std::endl;
		oui[8] = 5;
		std::cout << "After :" << std::endl;
		std::cout << oui[8] << std::endl;
	}
	catch(std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		int wrong = -5;
		Array<int> bad(wrong);
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		int yes = 180;
		Array<int> pouet(yes);
		std::cout << pouet[-4] << std::endl;
		std::cout << pouet[181] << std::endl;	
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	
}