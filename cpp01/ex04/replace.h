#ifndef REPLACE_H
# define REPLACE_H

#include <iostream>
#include <string.h>
#include <fstream>
#include <istream>

int	check_args(int argc, char **argv);
int	ft_putstr(const char *str);
int	ft_replace(std::string filename, const char *s1, const char *s2);
#endif
