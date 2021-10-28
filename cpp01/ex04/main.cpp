
#include "replace.h"

int main(int argc, char **argv)
{
	std::string	filename;

	if (check_args(argc, argv))
		return (1);
	filename = argv[1];
	if (ft_replace(filename, argv[2], argv[3]))
		return (1);
	return (0);
}
