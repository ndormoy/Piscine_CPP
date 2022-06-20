#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*------------------------------Destructor--------------------------------------------*/

Base::~Base(void)
{

}

/*------------------------------Functions---------------------------------------------*/

Base * generate(void)
{
	srand (time(NULL));
	int	i = rand()%3;
	if (i == 0)
	{
		A	*ret = new A;
		return (ret);
	}
	else if (i == 1)
	{
		B	*ret = new B;
		return (ret);
	}
	else
	{
		C	*ret = new C;	
		return (ret);
	}
}

void identify(Base* p)
{
	Base	*objA = dynamic_cast<A *>(p);
	Base	*objB = dynamic_cast<B *>(p);
	Base	*objC = dynamic_cast<C *>(p);
	if (objA)
		std::cout << "A" << std::endl;
	else if (objB)
		std::cout << "B" << std::endl;
	else if (objC)
		std::cout << "C" << std::endl;	
}

void identify(Base& p)
{
	try
	{
		Base	&objA = dynamic_cast<A &>(p);
		(void)objA;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &error)
	{
	}
	try
	{
		Base	&objB = dynamic_cast<B &>(p);
		(void)objB;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &error)
	{
	}
	try
	{
		Base	&objC = dynamic_cast<C &>(p);
		(void)objC;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &error)
	{
	}
}