#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#define NB_ANIMAL 4

// int	main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;//should not create a leak
// 	delete i;
// }


int main()
{
	Animal	*minou = new Cat();
	minou->setIdea("mdr", 0);
	std::cout << minou->getIdea(0) << std::endl;

	Cat	*cat = new Cat();
	cat->setIdea("pouet", 0);
	std::cout << cat->getIdea(0) << std::endl;

	return 0;
}