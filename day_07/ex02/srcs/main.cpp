#include "Array.hpp"
#include "Array.tpp"

int main()
{
	unsigned int *a = new unsigned int(2);
	std::cout << *a << std::endl;
	delete a;
	std::cout << "-------------------" << std::endl;

	int b = 5;
	Array< int> test(b);
	for (int i = 0; i < b; i++)
	{
		// std::cout << "Value = |" << test[i] << std::endl;
		std::cout << "Value = |" << test.getT()[i];
		std::cout << "| (Address = "<< &test.getT()[i] << ")" << std::endl;
	}
	std::cout << "Test deep copy" << std::endl;
	{
		Array<int>	deep_test = test;
		(void)deep_test;
	}
	
}