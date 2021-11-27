#include <iostream>
#include <string>

template<typename T>
class Array
{
public:
    Array<T>(void) {};
    Array<T>(unsigned int n) {arr = new [n] T}
    Array<T>(Array<T> const &other)
    {
        if (*this != other)
            *this = other;
    }
    ~Array(void);

    Array const &operator=(Array const &other)
    {

    }

private:
    T   *arr;
};
