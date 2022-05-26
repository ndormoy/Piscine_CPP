#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
	std::string		buffer;
	std::string		test;
	std::string		new_name("lol");
	std::string		other_name("pouet");

	test = new_name + other_name;
	std::cout << test << std::endl;
	std::ifstream	ifs(argv[1]);

	std::ofstream	ofs("new.txt");
	if (!ifs)
	{
		std::cerr << "Can't open the file " << argv[1];
	}
	ifs >> buffer;
	if (argc == 4)
	{
		while (std::getline(ifs, buffer))
		{
			std::cout << buffer << std::endl;
		}
		//std::cout << buffer << std::endl;
	}
	else
		std::cerr << "Wrong number of arguments" << std::endl;
}