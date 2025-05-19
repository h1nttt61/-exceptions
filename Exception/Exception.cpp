#include <iostream>

double divide(int a, int b)
{
    if (b)
        return a / b;
    throw "Cant deleted on 0";
}

void main()
{
    try
    {
        std::cout << divide(1, 2) << std::endl;
        std::cout << "Program fully worked" << std::endl;
    }
    catch (...)
    {
        std::cout << "Error" << std::endl;
    }
}
