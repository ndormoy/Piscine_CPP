#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void); // default constructor
		Animal(Animal const &src); // copy constructor
		virtual	~Animal(void); // destructor
		Animal	&operator=(Animal const &src); // assignment operator
		std::string	getType(void) const;
		virtual	void	makeSound(void) const;
	protected:
		std::string	_type;
};

#endif