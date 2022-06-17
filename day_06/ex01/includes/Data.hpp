#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <iostream>
#include <string>

struct	Data
{
	uintptr_t	_raw;
};

uintptr_t	serialize(Data *ptr);
Data*	deserialize(uintptr_t raw);

#endif