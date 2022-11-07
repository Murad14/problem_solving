#include<iostream>

int main()
{
    int n, i, sqrt;

    std::cout<< "Input the number of terms :";
    std::cin >> n;

    for (i=1; i <=n; ++i)
    {
        sqrt = i * i * i;
        std::cout << i << " the cube of " << i << " is : " << sqrt << std::endl;
    }

    return 0;
}

