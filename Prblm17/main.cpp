#include <iostream>

int main ()
{
    int size,row,col;

    std::cout << " Input the number of characters for a side:";
    std::cin >> size;

    for ( row= 1; row <= size; ++row)
    {
        for (col=1; col <= size; ++col)
        {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
