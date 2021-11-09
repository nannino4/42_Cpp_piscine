#include <iostream>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *s_ptr = &s;
    std::string &s_ref = s;

    std::cout << &s << std::endl;
    std::cout << s_ptr << std::endl;
    std::cout << &s_ref << std::endl;
    std::cout << s << std::endl;
    std::cout << *s_ptr << std::endl;
    std::cout << s_ref << std::endl;
}
