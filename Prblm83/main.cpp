#include <iostream>

int main ()
{

    int num1;
    int sum , n;
    sum= 0;

    std::cout << "Input any number: ";
    std::cin >> num1;
    n= num1;

    while (num1 !=0)
    {
        sum+= num1 % 10;
        num1 /= 10;
    }
    std::cout << "The sum of the digits of the number " << n << " is: " << sum << std::endl;

return 0;
}
