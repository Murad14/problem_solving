#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    int posnum, ctr, sum, max = 0;
    int min = INT_MAX;
    int terval = -1;
    cout << "\n\n Input a positive integers to calculate some processes or -1 to terminate:\n";
    cout << "----------------------------------------------------------------------------\n";
    cout << " Input positive integer or " << terval << " to terminate: ";
    while (cin >> posnum && posnum != terval)
    {
        if (posnum > 0)
        {
            ++ctr;
            sum += posnum;
            if (max < posnum)
                max = posnum;
            if (min > posnum)
                min = posnum;
        }
        else
        {
            cout << "error: input must be positive! if negative, the value will only be -1! try again..." << endl;
        }
        cout << " Input positive integer or " << terval << " to terminate: ";
    }
    cout << "\n Your input is for termination. Here is the result below: " << endl;
    cout << " Number of positive integers is: " << ctr << endl;
    if (ctr > 0)
	{
        cout << " The maximum value is: " << max << endl;
        cout << " The minimum value is: " << min << endl;
        cout << fixed << setprecision(2);
        cout << " The average is " << (double)sum / ctr << endl;
    }
}
