#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);
		WrongCat &operator=(WrongCat const &src);
		std::string	GetType(void) const;
		void	makeSound(void) const;
};

#endif