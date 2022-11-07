#include <iostream>

int main ()
{
    int sum =0;

    std::cout << "Numbers between 100 and 200, divisible by 9: " <<std::endl;

    for (int i=100; i <=200; i++)
    {
        if (i % 9 == 0)
        {
            std::cout << i << " ";
            sum += i;
        }
    }
    std::cout << std::endl;
    std::cout << "The sum : " << sum << std::endl;

return 0;
}
