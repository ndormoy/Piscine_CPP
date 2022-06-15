#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class ScalarConversion
{
	public:
		ScalarConversion(void); // default constructor
		ScalarConversion(const ScalarConversion &src); // copy constructor
		ScalarConversion(std::string literal);
		~ScalarConversion();

		ScalarConversion &operator=(const ScalarConversion &src);

		int whatType(std::string literal) const;
	private:

};




#endif