#include<iostream>

int main ()
{
    int n, sum;

    std::cout << "Input number of terms:";
    std::cin >> n;
    std::cout << "The odd numbers are:"<<std::endl;

    for (int i= 1; i <= n; i++)
    {
        int a;
        a = 2 * i - 1;
        sum += 2 * i - 1;
        std::cout << a << " ";
    }
        std::cout << std::endl;
        std::cout << "The sum of Natural Numbers upto: " << sum << std::endl;



    return 0;
}
