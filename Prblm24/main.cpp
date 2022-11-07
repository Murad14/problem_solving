#include <iostream>
using namespace std;

int main()
{
    float x, sum, no_row;
    int i, n;
    cout << "\n\n Display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input the value of x: ";
    cin >> x;
    cout << " Input number of terms: ";
    cin >> n;
    sum = 1;
    no_row = 1;
    for (i = 1; i < n; i++)
    {
        no_row = no_row * x / (float)i;
        sum = sum + no_row;
    }
    cout << " The sum  is : " << sum << endl;
}
