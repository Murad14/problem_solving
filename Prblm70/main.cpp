#include <iostream>

int main ()
{
    int dec_num, i=0;
    int bin_num [100];
    std::cout << "Input a decimal number: ";
    std::cin >> dec_num;
    std::cout << std::endl;

    while (dec_num !=0)
    {
        bin_num [i++] = dec_num % 2;
        dec_num = dec_num / 2;
    }
    std::cout << "The binary number is: ";
    for (int j=i-1; j>=0; j--)
    {
        std::cout << bin_num[j];
    }





    return 0;
}
