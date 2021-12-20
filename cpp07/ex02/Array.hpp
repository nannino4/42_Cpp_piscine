#pragma once

#include <iostream>

template <typename T>
class Array
{
public:
/*
*******************************************************************************
** Constructors & Destructor
*******************************************************************************
*/
    Array(void) : len(0) {arr = new T[0];}
    Array(unsigned int n) : len(n) {arr = new T[n];}
    Array(Array const &other) : arr(0), len(0)
    {
        if (this != &other)
            *this = other;
    }
    ~Array(void) {delete [] arr;}

/*
*******************************************************************************
** Operator Overloads
*******************************************************************************
*/
    Array const &operator=(Array const &other)
    {
        if (this != &other)
        {
            if (arr && len > 0)
                delete [] arr;
            len = other.len;
            arr = new T[len];
            for (unsigned int i = 0; i < len; i++)
            {
                arr[i] = other.arr[i];
            }
        }
        return (*this);
    }

    T &operator[](long int i)
    {
        if (i < 0 || i >= (long int)size())
            throw OutOfRangeException();
        return (this->arr[i]);
    }

/*
*******************************************************************************
** Others
*******************************************************************************
*/
    unsigned int size(void) const {return (len);}

/*
*******************************************************************************
** Exceptions
*******************************************************************************
*/
    class OutOfRangeException : public std::exception
    {
        public:
        const char *what() const throw()
        {
            return ("Error: Cannot retrieve array element: Index is out of range");
        }
    };

private:
    T               *arr;
    unsigned int    len;
};
