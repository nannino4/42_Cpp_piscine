#include "replace.h"
#include <stdlib.h>

std::string	edit_line(std::string line, const char *s1, const char *s2)
{
	std::string		src = s1;
	std::string		dst = s2;
	int				i;

	i = line.find(src, 0);
	while (i != std::string::npos)
	{
		line.erase(i, src.length());
		line.insert(i, s2);
		i += dst.length();
		i = line.find(src, i);
	}
	return (line);
}

int	ft_replace(std::string file_name, const char *s1, const char *s2)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;

	infile.open(file_name.c_str());
	outfile.open(file_name.append(".replace").c_str());
	if (outfile.fail())
		return (ft_putstr("Error: Couldn't create file."));
	std::getline(infile, line);
	while (!infile.fail())
	{
		outfile << edit_line(line, s1, s2);
		if (infile.eof())
			break ;
		outfile << std::endl;
		std::getline(infile, line);
	}
	return (0);
}