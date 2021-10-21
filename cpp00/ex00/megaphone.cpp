#include <iostream>

int main(int argc, char **argv)
{
    std::string s;
    int i;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    s = "";
    if (argv && *argv)
    {
        argv++;
    }
    while (argv && *argv)
    {
        s = s + *argv;
        argv++;
    }
    i = 0;
    while (s[i])
    {
        putchar(toupper(s[i]));
        i++;
    }
    std::cout << std::endl;
}
