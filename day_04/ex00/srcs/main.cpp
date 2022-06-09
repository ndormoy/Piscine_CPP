#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	const WrongAnimal* bad = new WrongCat();
	std::cout << "Expected dog --> " << d->getType() << std::endl;
	std::cout << "Expected Cat --> " << c->getType() << std::endl;
	std::cout << "Expected default --> " << meta->getType() << std::endl;
	c->makeSound(); //will output the cat sound!
	d->makeSound();
	meta->makeSound();
	bad->makeSound(); // Va afficher WrongAnimal parce que makeSound n'est pas virtual
	delete (d);
	delete (c);
	delete (meta);
	delete (bad);
 	return (0);
}