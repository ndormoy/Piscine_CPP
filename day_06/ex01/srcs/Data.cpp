#include "Data.hpp"

/*------------------------------Functions---------------------------------------------*/

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	u = reinterpret_cast<uintptr_t >(ptr);
	return (u);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<Data *> (raw);
	return (ptr);
}
