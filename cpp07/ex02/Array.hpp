#pragma once

#include <iostream>
#include <string>

template<typename T>
class Array
{
public:
    Array(void) : len(0), arr(0) {};
    Array(unsigned int n) : len(n) {arr = new T[n];}
    Array(Array const &other)
    {
        if (this != &other)
            *this = other;
    }
    ~Array(void) {delete [] arr;}

    Array const &operator=(Array const &other)
    {
        if (this != &other)
        {
            len = other.len;
            if (arr)
                delete [] arr;
            arr = new T[len];
            for (int i = 0; i < len; i++)
            {
                arr[i] = other.arr[i];
            }
        }
        return (*this);
    }

    T   &operator[](int i)
    {
        if (i < 0 || i >= size())
            throw OutOfRangeException();
        return (this->arr[i]);
    }

    int size(void) const {return (len);}

    class OutOfRangeException : public std::exception
    {
        public:
        const char *what() const throw()
        {
            return ("Cannot retrieve array element: Index is out of range");
        }
    };

private:
    T               *arr;
    unsigned int    len;
};
