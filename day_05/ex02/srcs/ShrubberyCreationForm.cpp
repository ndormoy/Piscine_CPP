#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <cstring>
#include <stdexcept>

/*-------------------------------Constructor-------------------------------------------*/

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("DEFAULT", 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	(void)target;
}

/*-------------------------------Destructor--------------------------------------------*/

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

/*------------------------------Overload operator--------------------------------------*/

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
		this->Form::operator=(src);
	return (*this);
}

/*------------------------------Nested Class-------------------------------------------*/

const char	*ShrubberyCreationForm::PbFile::what() const throw()
{
	return ("Problem with file");
}

/*------------------------------Functions----------------------------------------------*/

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
	if (this->getSigned() == false)
		throw(FormNotSigned());
	else if (executor.getGrade() > this->getToExecute())
		throw(GradeTooLowException());
	std::string		name = this->getName().append("_shrubbery");
	std::ofstream	ofs(name.c_str());
	if (!ofs)
		throw(PbFile());
	std::string		tree = "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\\n";
	tree.append("           `-._\\/  .  \\ /    |/_\n               \\  _\\, y | \\//\n         _\\_.___\\, \\/ -.\\||\n           `7-,--.`._||  / / ,\n           /'     `-. `./ / |/_.'\n                     |    |//\n                     |_    /\n                     |-   |\n                     |   =|\n                     |    |\n--------------------/ ,  . \\--------._\n");
	ofs << tree;
	ofs.close();
}