#include<iostream>

    int sumDigits (int num1, int n)
    {
        int sum = 0;
        while (num1 !=0)
        {
            sum+= num1 % 10;
            num1 /= 10;
        }
        return sum;
    }

int main()
{
    int num1, sum, n;
    sum=0;

    std::cout << " Input any number: ";
    std::cin >> num1;
    n= num1;
    std::cout << "The sum of the digits of the number " << n << " is: "
     << sumDigits(num1,n) << std::endl;

    return 0;
}
