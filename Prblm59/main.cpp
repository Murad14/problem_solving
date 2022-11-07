#include<iostream>

int main ()

{
    int n,r,ctr;

    std::cout << "Input any number: ";
    std::cin >> n;

    for (int i=0; i< 10; i++)
    {
        std::cout << "The frequency of " << i << "=";
        ctr=0;
        for (int j=n; j > 0; j= j /10)
        {
            r= j % 10;
            if (r==i)
            {
                ctr++;
            }
        }
        std::cout << ctr << std::endl;
    }


    return 0;
}
