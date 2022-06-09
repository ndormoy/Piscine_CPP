#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);
		Brain	 &operator=(Brain const &src);
		std::string	getIdea(int id) const;
		void	setIdea(std::string str, int id);
	private:
		std::string _ideas[100];
};

#endif