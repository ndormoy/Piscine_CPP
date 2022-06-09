#ifndef Animal_HPP
#define Animal_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual	~Cat(void);
		Cat &operator=(Cat const &src);
		std::string	GetType(void) const;
		void	makeSound(void) const;
};

#endif