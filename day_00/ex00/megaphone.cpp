#include <iostream>
#include <string>

int	main(int argc, char* argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string str;
		for(int i = 1 ; i < argc ; i++)
		{
			str = argv[i];
			for (int j = 0 ; j < (int)str.size() ; j++)
				std::cout << (char)toupper(str[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}