#include<iostream>

int main ()
{
    int num1, num2, sum=0, r;

    std::cout << "Input a number: ";
    std::cin >> num1;

    while (num1> 0)
    {
        r= num1 % 10;
        sum = sum + r;
        num1 = num1 / 10;
    }
    std::cout << "The sum of digit is: " << sum << std::endl;

    return 0;

}
