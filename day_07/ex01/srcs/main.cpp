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

// int main() 
// {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }