#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    string b, w, t;
    b = "black";
    w = "white";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if (j % 2 != 0)
            {
                cout << b;
                if (j < rows)
                {
                    cout << "-";
                }
            }
            else if (j % 2 == 0)
            {
                cout << w;
                if (j < rows)
                {
                    cout << "-";
                }
            }
        }
        t = b;
        b = w;
        w = t;
        cout << endl;
    }
}
