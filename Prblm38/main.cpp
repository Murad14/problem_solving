#include<iostream>

int main ()
{
    int rows,k =1;

    std::cout << "Input number of rows: ";
    std::cin >> rows;

    for (int i=1; i <= rows; i++)
    {
        for (int j= 1; j<=i; j++)
        {
            std::cout << k++ << " " ;
        }
        std::cout << std::endl;
    }

return 0;
}
