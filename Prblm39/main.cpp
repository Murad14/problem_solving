#include<iostream>

int main ()
{
    int n,t=1,spc;

    std::cout << "Input number of rows:";
    std::cin >> n;
    spc = n+4-1;

    for (int i=1;i <=n; i++)
    {
        for (int k= spc; k >=1; k--)
        {
            std::cout << " ";
        }
        for (int j=1; j<=i; j++)
        {
            std::cout << t++ << " ";
        }
        std::cout << std::endl;
        spc--;
    }
    return 0;
}
