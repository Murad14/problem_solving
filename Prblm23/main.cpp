#include <iostream>

int main ()
{
    int n, sum=0, t=9;

    std::cout << "Input number of terms:";
    std::cin >> n;

    for (int i = 1; i <=n; i++)
    {
        sum+= t;
        std::cout << t << "  ";
        t = t * 10 + 9;
    }
    std::cout << std::endl;
    std::cout << "The sum of the series = " << sum << std::endl;


    return 0;
}
