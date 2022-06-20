#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main()
{
	Base	*ptr = generate();
	identify(ptr);
	delete (ptr);
	std::cout << "----------------------" << std::endl;
	B	*testB = new B;
	B	&pouet = *testB;
	identify(pouet);
	delete (testB);
	C	*testC = new C;
	C	&pilou = *testC;
	identify(pilou);
	delete (testC);
	return (0);
}