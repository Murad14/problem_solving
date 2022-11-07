#include<iostream>

int main ()
{
    int num1, num2;

    std::cout << "Input the first integer: ";
    std::cin >> num1;
    std::cout << "Input the second integer: ";
    std::cin >> num2;

    if (num1 == num2)
    {
        std::cout << num1 << "==" << num2 << std::endl;
    }
    if (num1 != num2)
    {
        std::cout << num1 << "!=" << num2 << std::endl;
    }
    if (num1 < num2)
    {
        std::cout << num1 << "<" << num2 << std::endl;
    }
    if (num1 > num2 )
    {
        std::cout << num1 << ">" << num2 << std::endl;
    }
    if (num1 >= num2 )
    {
        std::cout << num1 << ">=" << num2 << std::endl;
    }
    if (num1 <= num2 )
    {
        std::cout << num1 << "<=" << num2 << std::endl;
    }


    return 0;
}
