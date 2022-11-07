#include <iostream>

int main ()
{
    int sn,en;

    std::cout << "Input the starting value for ASCII characters: ";
    std::cin >> sn;
    std::cout << "Input the ending value for ASCII characters: ";
    std::cin >> en;

    if (sn>255 || sn<0)
        sn=1;
    if (en<0 || en>255)
        en=255;
    std::cout << "The ASCII characters: " <<std::endl;
    for (int i= sn; i<=en; i++)
    {
        std::cout << i << "---> " << char(i)<<std::endl;
    }





    return 0;
}
