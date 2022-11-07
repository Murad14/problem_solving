#include <iostream>

int main ()
{
    int n, first, last;

    std::cout << "Input any number: ";
    std::cin >> n;
    first = n;
    last = n % 10;
    for (first =n; first >=10; first = first /10 );
        std::cout << "The first digit of " << n << " is:" << first << std::endl;
        std::cout << "The last digit of " << n << " is:" << last << std::endl;

    return 0;
}
