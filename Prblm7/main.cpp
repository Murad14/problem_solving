#include<iostream>

int main()
{
    int num1;
    int factorial=1;

    std::cout << "Input a number to find the factorial: ";
    std::cin>> num1;

    for(int i=1; i<=num1; i++){
        factorial= factorial*i;

    }
    std::cout << "The factorial of the given number is: " << factorial <<std::endl;




    return 0;
}
