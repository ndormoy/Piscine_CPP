#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void); // default constructor
		WrongAnimal(WrongAnimal const &src); // copy constructor
		~WrongAnimal(void); // destructor
		WrongAnimal	&operator=(WrongAnimal const &src); // assignment operator
		std::string	getType(void) const;
		void	makeSound(void) const;
	protected:
		std::string	_type;
};

#endif