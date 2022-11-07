#include<iostream>


int main()
{
    int i;
    int num1;
    int num2;
    int ctr=0;
    std::cout << "Input number for starting range: ";
    std::cin >> num1;
    "\n";
    std::cout << "Input number for ending range: ";
    std::cin >> num2;

    std::cout << "The prime numbers between "<< num1 <<" and " << num2 <<" are: " <<std::endl;
    for (int j = num1; j <= num2; j++)
    {
        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                ctr++;
            }

        }
            if (ctr == 2)
        {
            "\n";
            std::cout << j <<" ";

        }
        ctr = 0;
    }

return 0;
}

