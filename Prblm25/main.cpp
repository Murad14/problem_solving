#include<iostream>
#include <math.h>

int main ()
{
    double x, sum, ctr;
    int i,n,m,mm,nn;

    std::cout << "Display the sum of the series [ x - x^3 + x^5 + ......]  " <<std::endl;
    std::cout << "------------------------------------------------------------" <<std::endl;
    std::cout << "Input the value of x: ";
    std::cin >> x;
    std::cout << "Input number of terms: ";
    std::cin >> n;
    sum = x;
    m = -1;
    std::cout << "The values of series: ";
    std::cout << sum <<std::endl;
    std::cout << std::endl;
    for (i=1; i<n; i++)
    {
        ctr= 2 * i + 1;
        mm= pow (x,ctr);
        nn= mm * m;
        std::cout << nn << std::endl;
        sum = sum + nn;
        m = m * (-1);
    }
    std::cout << "The sum of the series upto 5 term is: " << sum << std::endl;


return 0;
}
