#include <iostream>
#include<algorithm>
using namespace std;

int main ()
{
    string txt;
    std::cout << "Enter a string: ";
    getline (cin, txt);

    reverse(txt.begin(), txt.end());

    std::cout << txt << std::endl;

    return 0;
}
