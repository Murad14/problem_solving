#include <iostream>

using namespace std;

int main()
{
    int quot, i=1;
    int oct_num[100];

	cout << " Input a decimal number: ";
	cin>> quot;

        while(quot != 0)
        {
            oct_num[i++] = quot % 8;
            quot = quot/8;
        }

        cout<<" The octal number is: ";
        for(int j=i-1; j>0; j--)
        {
            cout<<oct_num[j];
        }
		cout<<"\n";
}
