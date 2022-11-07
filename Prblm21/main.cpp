#include<iostream>

int main ()
{
    int n, sum=0;

    std::cout << "Input number of terms: ";
    std::cin >> n;

    std::cout << "The even numbers are: " <<std::endl;

    for (int i=1; i <=n; i++)
    {
        int even;
        even= 2* i;
        sum+= even;

        std::cout << even << " ";
    }
        std::cout << std::endl;
        std::cout << "The sum of even Numbers upto: " << sum << std::endl;

    return 0;
}
