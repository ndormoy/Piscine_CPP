#include "ScalarConversion.hpp"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: <" << argv[0] << "> <literal>" << std::endl;
		return (0);
	}
	ScalarConversion	Num(argv[1]);
}