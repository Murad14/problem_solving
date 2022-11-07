#include<iostream>
#include <math.h>

int main ()

{
    double sum=0, a;
    int n;

    std::cout<< "Input the value for nth term: ";
    std::cin >> n;

    for (int i=1; i<=n; ++i)
    {
        a= 1 / pow (i,i);
        sum += a;
        std::cout << "1/ " << i << "^" << i << " = " << a << std::endl;
    }
    std::cout << "The sum of the above series is: " << sum << std::endl;
    return 0;
}
