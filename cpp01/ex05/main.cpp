#include "Karen.hpp"

int main(void)
{
    Karen   wild_karen;
    int     i;

    i = 0;
    while (i < 5)
    {
        wild_karen.complain("DEBUG");
        wild_karen.complain("INFO");
        wild_karen.complain("WARNING");
        wild_karen.complain("ERROR");
        wild_karen.complain("INVALID");
        std::cout << "round n. " << i << " completed\n" << std::endl;
        i++;
    }
}
