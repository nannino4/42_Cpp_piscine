#include "Array.hpp"

int main(void)
{
    {
        Array<int> arr1(10);
        Array<int> arr2(20);
        Array<int> arr3;

        arr3 = arr1;

        try
        {
            arr3[12] = 42;
            std::cout << "arr1[12] = " << arr1[12] << std::endl;
            std::cout << "arr3[12] = " << arr3[12] << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

        arr3 = arr2;

        try
        {
            arr3[12] = 42;
            std::cout << "arr2[12] = " << arr2[12] << std::endl;
            std::cout << "arr3[12] = " << arr3[12] << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        Array<float> arr1(10);
        Array<float> arr2(20);
        Array<float> arr3;

        arr3 = arr1;

        try
        {
            arr3[12] = 42.42f;
            std::cout << "arr1[12] = " << arr1[12] << std::endl;
            std::cout << "arr3[12] = " << arr3[12] << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

        arr3 = arr2;

        try
        {
            arr3[12] = 42.42f;
            std::cout << "arr2[12] = " << arr2[12] << std::endl;
            std::cout << "arr3[12] = " << arr3[12] << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}