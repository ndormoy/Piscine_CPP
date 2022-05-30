#include "Harl.hpp"
#include <cstring>

int main(int argc, char* argv[])
{
	Harl instance;

	if (argc != 2)
	{
		std::cerr << "Expected : ./harl <LEVEL>" << std::endl;
		return (1);
	}
	if (std::strlen(argv[1]) == 0)
		return (1);
	instance.complain(argv[1]);
	return (0);
}