#include <string>
#include <iostream>
#include <limits>
#include <cmath>

/*
*******************************************************************************
** Print
*******************************************************************************
*/

void    print_char(double &d, std::string &specialCase)
{
    std::cout << "char: ";
    if (!specialCase.empty())
        std::cout << "impossible" << std::endl;
    else if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
        std::cout << "impossible" << std::endl;
    else if (!isprint(static_cast<char>(d)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" <<  static_cast<char>(d) << "'" << std::endl;
}

void    print_int(double &d, std::string &specialCase)
{
    std::cout << "int: ";
    if (!specialCase.empty())
        std::cout << "impossible" << std::endl;
    else if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
        std::cout << "impossible" << std::endl;
    else
        std::cout <<  static_cast<int>(d) << std::endl;
}

void    print_float(double &d, std::string &specialCase)
{
    double intpart = 0;

    std::cout << "float: ";
    if (!specialCase.empty())
    {
        if (specialCase == "nanf" || specialCase == "nan")
            std::cout << "nanf" << std::endl;
        else if (specialCase == "-inf" || specialCase == "-inff")
            std::cout << "-inff" << std::endl;
        else
            std::cout << "+inff" << std::endl;
    }
    else if (d < -std::numeric_limits<float>::max() || d > std::numeric_limits<float>::max())
        std::cout << "impossible" << std::endl;
    else
    {
        std::cout << static_cast<float>(d);
        if (modf(d, &intpart) == 0 && d < 1000000)
            std::cout << ".0f" << std::endl;
        else
            std::cout << "f" << std::endl;
    }
}

void    print_double(double &d, std::string &specialCase)
{
    double intpart = 0;

    std::cout << "double: ";
    if (!specialCase.empty())
    {
        if (specialCase == "nanf" || specialCase == "nan")
            std::cout << "nan" << std::endl;
        else if (specialCase == "-inf" || specialCase == "-inff")
            std::cout << "-inf" << std::endl;
        else
            std::cout << "inf" << std::endl;
    }
    else
    {
        std::cout << d;
        if (modf(d, &intpart) == 0 && d < 1000000)
            std::cout << ".0" << std::endl;
        else
            std::cout << std::endl;
    }
}

/*
*******************************************************************************
** Checks
*******************************************************************************
*/

bool    string_isexception(char const *str, std::string &specialCase)
{
    std::string exceptions[8] = {"nan","inf", "+inf", "-inf", "nanf","inff", "+inff", "-inff"};

    for(size_t i = 0; i < 8; i++)
    {
        if (std::string(str).compare(exceptions[i]) == 0)
        {
            specialCase = exceptions[i];
            return (true);
        }
    }
    return (false);
}

bool    argument_isvalid(char const*  str, double &tmp, std::string &specialCase)
{
    char*	end_ptr = 0;

    if (str[0] && !str[1] && (str[0] < '0' || str[0] > '9'))
    {
        tmp = static_cast<double>(str[0]);
        return (true);
    }
    if (string_isexception(str, specialCase))
        return (true);
    tmp = strtod(str, &end_ptr);
    if (errno == ERANGE)
    {
        std::cout << "Error: All values are out of range: Every conversion is impossible" << std::endl;
        return (false);
    }
	if (str == end_ptr)
    {
        std::cout << "Error: String must be a decimal value" << std::endl;
        return (false);
    }
    if (end_ptr[0] == '\0' || (end_ptr[0] != '\0' && end_ptr[0] == 'f' && end_ptr[1] == '\0'))
        return (true); 
	std::cout << "Error: String must be a decimal value" << std::endl;
	return (false);
}

/*
*******************************************************************************
** Main
*******************************************************************************
*/

int main(int argc, char const **argv)
{
    double      d;
    std::string specialCase;

    if (argc != 2)
    {
        std::cout << "Error: This program takes one and only one argument" << std::endl;
        return (1);
    }
    if (!argument_isvalid(argv[1], d, specialCase))
        return (1);
    print_char(d, specialCase);
    print_int(d, specialCase);
    print_float(d, specialCase);
    print_double(d, specialCase);
}
