#ifndef Animal_HPP
#define Animal_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual	~Cat(void);
		Cat &operator=(Cat const &src);
		std::string	getType(void) const;
		std::string	getIdea(int id) const;
		void	setIdea(std::string str, int id);
		void	makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif