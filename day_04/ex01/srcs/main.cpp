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
	const Animal *AnimTab[NB_ANIMAL];
	
	for (int i = 0; i < NB_ANIMAL; i++)
	{
		if (i % 2 == 0)
			AnimTab[i] = new Cat();
		else
			AnimTab[i] = new Dog();
		
	}
	for (int i = 0; i < NB_ANIMAL; i++)
	{
		std::cout << "type = " << AnimTab[i]->getType() << std::endl;
		delete AnimTab[i];
	}
}

// int main()
// {
// 	Animal	*minou = new Cat();
// 	minou->setIdea("mdr", 0);
// 	std::cout << minou->getIdea(0) << std::endl;

// 	Cat	*cat = new Cat();
// 	cat->setIdea("pouet", 0);
// 	std::cout << cat->getIdea(0) << std::endl;

// 	return 0;
// }