#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int descending_compare(int a, int b)
{
	if (a < b)
		return (true);
	return (false);
}

int ascending_compare(int a, int b)
{
	if (a > b)
		return (true);
	return (false);
}

void	custome_sort(std::vector<int>& tab, int(*compare_fct)(int, int))
{
	for (int i = 0; i < (int)tab.size(); i++)
	{
		
		for (int j = i + 1; j < (int)tab.size(); j++)
		{
			if (compare_fct(tab[i], tab[j]) == true)
				std::swap(tab[i], tab[j]);
		}
	}
}

void	print_tab_2d(std::vector<int>& tab)
{
	std::cout << ">>|";
	for (int i = 0; i < (int)tab.size(); i++)
	{
		std::cout << tab[i];
	}
	std::cout << "|<<";
	std::cout << std::endl;
}

int	 main()
{
	std::vector<int>tab = {2, 5, 1, 3};
	int	(*compare_stuff)(int, int) = descending_compare;

	std::cout << "Before sorting" << std::endl;
	print_tab_2d(tab);
	std::cout << "Sorting with definition of function pointer : descending" << std::endl;
	custome_sort(tab, compare_stuff);
	print_tab_2d(tab);
	std::cout << "Sorting with passing address of function in argument : ascending" << std::endl;
	custome_sort(tab, &ascending_compare);
	print_tab_2d(tab);
	std::cout << "Sorting with passing address of function in argument : descending" << std::endl;
	custome_sort(tab, &descending_compare);
	print_tab_2d(tab);

}