#include "easyfind.hpp"
#include "easyfind.tpp"



int main()
{
	// std::vector<int> src {1, 2, 3, 4}; // Just in c++11 :'(
	std::vector<int> src;
	src.push_back(1);
	src.push_back(2);
	src.push_back(3);
	src.push_back(4);
	int	to_find = 2;

	try
	{
		easyfind(src, to_find);
		easyfind(src, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}