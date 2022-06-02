#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cerrno>
#include <cstring>

std::string __replace_occurence(std::string buffer, std::string new_txt,
	std::string new_str, std::string old_str)
{
	std::size_t found;

	for (int i = 0; i < (int)buffer.size(); i++)
	{
		found = buffer.find(old_str, i);
		if (found != std::string::npos)
		{
			while (i < (int)found)
				new_txt += buffer[i++];
			new_txt.append(new_str);
			i += old_str.size() - 1;
		}
		else
		{
			while (i < (int)buffer.size())
				new_txt += buffer[i++];
			return (new_txt);
		}
	}
	return (new_txt);
}

/*Return true if the file is empty*/

bool	is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

bool	__check_args(int argc, char *argv[])
{
	if (argc != 4 || std::strlen(argv[1]) == 0 || std::strlen(argv[2]) == 0 || std::strlen(argv[3]) == 0)
	{
		std::cerr << "Wrong arguments" << std::endl;
		return (false);
	}
	return (true);
}

bool	__manage_ifs_error(std::ifstream &ifs, char *name)
{
	if (!ifs)
	{
		std::cerr << "Can't open the file " << name << std::endl;
		return (false);
	}
	else if (is_empty(ifs))
	{
		std::cerr << name << " is an empty file or a directory" << std::endl;
		return (false);
	}
	return (true);
}

std::string	__manage_replace(char *argv[], std::ifstream &ifs)
{
	std::string	buffer;
	std::string	new_txt;
	std::string	old_str = argv[2];
	std::string	new_str = argv[3];

	while (42)
	{
		std::getline(ifs, buffer);
		new_txt = __replace_occurence(buffer, new_txt, new_str, old_str);
		if (ifs.eof() == true)
			break ;
		new_txt.append("\n");
	}
	return (new_txt);
}

int main(int argc, char *argv[])
{
	if (__check_args(argc, argv) == false)
		return (false);
	std::ifstream	ifs(argv[1]);
	if (__manage_ifs_error(ifs, argv[1]) == false)
		return (false);
	std::string		new_file = argv[1];
	new_file.append(".replace");
	std::ofstream	ofs(new_file.c_str());
	std::string		new_txt = __manage_replace(argv, ifs);
	ofs << new_txt;
	ifs.close();
	ofs.close();
}
