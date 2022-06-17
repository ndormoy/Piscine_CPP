#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class	Base
{
	public:
		virtual	~Base(void); // destructor
};

Base *	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif