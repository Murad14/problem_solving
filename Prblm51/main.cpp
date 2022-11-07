#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    cout << "\n\n Display the pattern using digits with right justified:\n";
    cout << "-----------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= rows - i; j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
}
