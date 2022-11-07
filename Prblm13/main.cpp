#include <iostream>

int main ()
{
    int n, sum=0, tsum;

    std::cout << "Input the value for nth term: ";
    std::cin >> n;

    for (int i=1; i<=n; i++)
    {
        tsum=0;
        for(int j=1; j<=i; j++)
        {
            sum+= j;
            tsum+= j;
            std::cout<< j;
            if (j < i)
            {
                std::cout << "+";
            }
        }
        std::cout << "=" << tsum << std::endl;
    }
    std::cout << "The sum of the above series is: " << sum << std::endl;

    return 0;
}
