#include <iostream>

int main ()
{
    int n1, n2, hcf, lcm;

    std::cout << "Input 1st number for LCM: ";
    std::cin >> n1;
    std::cout << "Input 2nd number for LCM: ";
    std::cin >> n2;

    int j= (n1 > n2) ? n1 : n2;
    for (int i=1; i<=j; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
        lcm = (n1 * n2) / hcf;
    }
    std::cout << "The LCM of " << n1 << " and " << n2 << " is: "<< lcm << std::endl;

    return 0;
}
