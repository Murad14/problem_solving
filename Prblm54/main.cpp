#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i, j, spc, n, mm, d = 1, k;
    cout << "\n\n Display the pattern like pyramid with power of 2:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input the number of rows: ";
    cin >> n;
    //----------- space for first line ----------------------
    for (i = 1; i <= n * 2 + 2 + 5; i++) //extra 5 spaces is the margin from left
        cout << " ";
    cout << pow(2, 0) << endl;
    for (i = 1; i < n; i++)
    {
        //----------- printing spaces from 2nd line to end -------
        for (k = 1; k <= n * 2 - d + 5; k++)
        {
            cout << " ";
        }
        //----------- print upto middle ----------------
        for (j = 0; j < i; j++)
        {
            mm = pow(2, j);
            cout << mm << "  "; //print 2 spaces
        }
        //------------- print after middle to end -------
        for (j = i; j >= 0; j--)
        {
            mm = pow(2, j);
            cout << mm << "  "; //print 2 spaces
        }
        d = d + 3;
        cout << endl;
    }
}

