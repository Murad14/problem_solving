#include <iostream>
using namespace std;
int main()
{
    int trm, bs, r, q, i, num;
    cout << "\n\n Print the first N numbers for a specific base:\n";
    cout << " The number 11 in base 10 = 1*(10^1)+1*(10^0)=11" << endl;
    cout << " Similarly the number 11 in base 7 = 1*(7^1)+1*(7^0)=8" << endl;
    cout << "----------------------------------------------------------------\n";
    cout << " Input the number of term: ";
    cin >> trm;
    cout << " Input the base: ";
    cin >> bs;
    cout << " The numbers in base " << bs << " are: " << endl;
    for (i = 1; i <= trm; i++)
    {
        r = i % bs;
        q = i / bs;
        num = q * 10 + r;
        cout << num << "  ";
    }
    cout << endl;
}

