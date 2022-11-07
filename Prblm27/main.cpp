#include <iostream>

int main ()
{
    int first=0, n, second =1, count= 0, fibo;

    std::cout << "Input number of terms to display: ";
    std::cin >> n;
    std::cout << "Here is the Fibonacci upto " << n << " terms:" <<std::endl;

    while (count < n)
    {
        if(count <=1)
        {
            fibo = count;
            std::cout << fibo << " ";
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
            std::cout << fibo << " ";

        }
        count++;

    }

    return 0;
}
