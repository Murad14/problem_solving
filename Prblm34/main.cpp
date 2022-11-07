#include <iostream>
#include<string>

int main ()
{
    char str[50];
    int i, l=0;

    std::cout << "Input a string:";
    std::cin >> str;


    for (int i = 0; str[i]!='\0'; i++)
    {
      l++;
    }
    std::cout << "The string contains " << l << " number of characters." << std::endl;
    std::cout << "So, the length of the string " << str << " is:" << l << std::endl;





    return 0;
}
