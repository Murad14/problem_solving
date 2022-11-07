#include <iostream>

int main ()
{
    int i,j,n;

    std::cout << "Input the number of rows: ";
    std::cin >> n;

    for (i=1; i<=n;)
    {
        std::cout << i;
        for (j= i + 1; j <=n;)
        {
            std::cout << j;
            j = j+1;
        }
        std::cout << std::endl;
        i= i+1;
    }

    return 0;
}
