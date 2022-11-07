#include <iostream>

int main ()
{
    int n, r;

    std::cout << "Input a number: ";
    std::cin >> n;

        while ( n > 0)
        {
            r = n % 10;
            std::cout << r << " ";
            n= n / 10;
        }






    return 0;
}
