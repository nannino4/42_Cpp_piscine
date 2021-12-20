#include "iter.hpp"

int main(void)
{
    int     int_arr[5] = {0, 1, 2, 3, 4};
    char    char_arr[3] = {'a', 'b', 'c'};
    float   float_arr[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};

    iter<int, void>(int_arr, 5, ::foo);
    std::cout << std::endl;
    iter<char, void>(char_arr, 3, ::foo);
    std::cout << std::endl;
    iter<float, void>(float_arr, 7, ::foo);
}