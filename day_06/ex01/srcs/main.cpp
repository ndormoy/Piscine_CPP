#include "Data.hpp"

int	main()
{
	Data	ptr;

	ptr._raw = 5;
	std::cout << "raw = " << ptr._raw << std::endl;
	uintptr_t	lol = serialize(&ptr);
	std::cout << "serialize = " << lol << std::endl;
	Data	*ret_ptr = deserialize(lol);
	std::cout << ret_ptr << std::endl;
	std::cout << ret_ptr->_raw << std::endl;
	std::cout << serialize(ret_ptr) << std::endl;
	return (0);
}