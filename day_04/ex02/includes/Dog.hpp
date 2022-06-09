#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		virtual	~Dog(void);
		Dog &operator=(Dog const &src);
		std::string	getType(void) const;
		std::string	getIdea(int id) const;
		void	setIdea(std::string str, int id);
		void	makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif