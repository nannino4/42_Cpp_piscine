#pragma once

#include <iostream>
#include <string>

template<typename T, typename U>
void    iter(T *ptr, int size, U (*f)(T))
{
    int i;

    for (i = 0; i < size; i++)
    {
        f(ptr[i]);
    }
}

template<typename T>
void foo(T elem)
{
    std::cout << elem << std::endl;
}
