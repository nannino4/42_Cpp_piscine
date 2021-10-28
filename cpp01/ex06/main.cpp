#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen   wild_karen;
    int     i;
    int     filter;

    if (argc > 2)
    {
        std::cout << "invalid arguments" << std::endl;
        return (1);
    }
    else if (argc < 2)
        wild_karen.setFilter(-1);
    else
        wild_karen.setFilter(wild_karen.get_level_id(argv[1]));
    i = 0;
    while (i < 5)
    {
        wild_karen.complain(0);
        wild_karen.complain(1);
        wild_karen.complain(2);
        wild_karen.complain(3);
        wild_karen.complain(4);
        std::cout << "round n. " << i << " completed\n" << std::endl;
        i++;
    }
}
