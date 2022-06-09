#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal	*minou = new Cat();
	minou->setIdea("mdr", 0);
	std::cout << minou->getIdea(0) << std::endl;

	Cat	*cat = new Cat();
	cat->setIdea("pouet", 0);
	std::cout << cat->getIdea(0) << std::endl;

	// Animal	*anim = new Animal();
	// (void)anim;
	delete cat;
	delete minou;
	return 0;
}