#include <iostream>

int main ()
{

    int n, sum, a;

    std::cout << "The sum of the above series is: ";
    std::cin >> n;

    for (int i=1; i<=n; i++)
    {
        a= i * i;
        sum += a;
        std::cout << i << "*" << i << "=" << a << std::endl;
    }
    std::cout << "The sum of the above series is: " << sum << std::endl;

    return 0;
}

