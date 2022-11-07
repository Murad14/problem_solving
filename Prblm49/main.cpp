#include <iostream>
using namespace std;

int main()
{
    int i, j, spc, n;
    cout << "\n\n Display the pattern like pyramid using digits:\n";
    cout << "---------------------------------------------------\n";
    cout << " Input the number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        spc = n - i;
        while (spc-- > 0)
            cout << " ";
        for (j = i; j < 2 * i - 1; j++)
            cout << j;
        for (j = 2 * i - 1; j > i - 1; j--)
            cout << j;
        cout << endl;
    }
}

