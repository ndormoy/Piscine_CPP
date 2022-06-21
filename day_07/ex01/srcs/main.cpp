#include "iter.hpp"

int main()
{
	int tab[4] = {2, 4, 6, 8};
	std::cout << "Before : " << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << tab[i] << std::endl;
	iter(tab, 4, __double);
	std::cout << "After : " << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << tab[i] << std::endl;
}
