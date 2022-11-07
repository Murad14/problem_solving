#include<iostream>

int main ()
{
    int n,t,spc;

    std::cout << "Input number of rows:";
    std::cin >> n;
    spc = n+4-1;

    for (int i=0;i <n; i++)
    {
        for (int k= spc; k >=1; k--)
        {
            std::cout << " ";
        }
        for (int j=1; j<=2*i-1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        spc--;
    }
    return 0;
}

