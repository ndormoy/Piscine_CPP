#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
	srand (time(NULL));
	int	i = rand()%3;
	if (i == 0)
	{
		A	*ret;
		return (ret);
	}
	else if (i = 1)
	{
		B	*ret;
		return (ret);
	}
	else
	{
		C	*ret;
		return (ret);
	}
}

void identify(Base* p)
{
	// Base	*objA = new A();
	// Base	*objB = new B();
	// Base	*objC = new C();
	Base	*objA = dynamic_cast<A *>(p);
	Base	*objB = dynamic_cast<B *>(p);
	Base	*objC = dynamic_cast<C *>(p);
	if (objA)
		std::cout << "A" << std::endl;
	else if (objB)
		std::cout << "B" << std::endl;
	else if (objC)
		std::cout << "C" << std::endl;
	delete objA;
	delete objB;
	delete objC;
	
}

void identify(Base& p)
{

}