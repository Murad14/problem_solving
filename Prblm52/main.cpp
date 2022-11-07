#include <iostream>
using namespace std;

int main()
{
    int i, j, rows, d;
    cout << "\n\n Display the pattern using digits with left justified:\n";
    cout << "----------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    d = 0;
    for (i = 1; i <= rows; i++)
	{
        for (j = rows - d; j >= 1; j--)
		{
            cout << j << " ";
        }
        d++;
        cout << endl;
    }
}

