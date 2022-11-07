#include <iostream>

int main ()

{
    int n, a;
    double sum=0;

    std::cout << "Input number of terms: ";
    std::cin >> n;

    for (float i=1; i<=n; i++)
    {
        if (i <= n)
        {
            std::cout << "1/" << i << " + ";
            sum+= 1 / i;

        }
        if (i == n)
        {
            std::cout << "1/" << i;
            sum+= 1 / i;
        }
    }
    std::cout << " The sum of the series upto " << n << "terms: " << sum <<std::endl;

    return 0;
}
