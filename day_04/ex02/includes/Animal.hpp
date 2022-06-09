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
		virtual	std::string	getIdea(int id) const = 0; // Methode pure
		virtual	void	setIdea(std::string str, int id) = 0; // Methode pure
	protected:
		std::string	_type;
};

/* Ici getIdea et setIdea sont ce qu'on appelle des methode pures.
La classe devient donc abstraite, on ne peut pas l'implementer dans
la classe Animal mais elle devra etre dans ses classes filles : 
Cat et Dog. Ca tombe bien, on en a besoin pour pouvoir acceder
aux "ideas"
On en a pas besoin si on cree directement un Cat ou Dog
Cat *chat = new Cat()
Mais si on fait : Animal *minou = new Cat()
Si on a pas cree de methode pure pour implementer les fonctions
getIdead et setIdea on ne pourra pas y acceder via minou
*/

#endif