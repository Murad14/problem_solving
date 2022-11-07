#include<iostream>

int main (){
    int num1, num2, gcd;


    std::cout << "Inter first number: ";
    std::cin >> num1;
    std::cout << "Inter second number: ";
    std::cin >> num2;

    for (int i=1; i <= num1 && i<= num2; ++i)
    {
        if ( num1 % i == 0 && num2 % i == 0)
        {
            gcd= i;
        }
    }
    std::cout << "GCD is: " << gcd <<std::endl;



return 0;
}
