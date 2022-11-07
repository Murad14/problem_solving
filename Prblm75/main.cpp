#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        int binnum1, binaryNumber,rem, decnum=0, quot, i=1, j;
        int octnum[100];
	cout << "\n\n Convert a binary number to octal number:\n";
	cout << "---------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
        binnum1=binaryNumber;
      while(binaryNumber > 0)
        {
            rem = binaryNumber % 10;
            decnum = decnum + rem*i;
            i = i*2;
            binaryNumber = binaryNumber/10;
        }
		i=1;
        quot = decnum;

        while(quot > 0)
        {
            octnum[i++] = quot % 8;
            quot = quot / 8;
        }
        cout<<" The equivalent octal value of " <<binnum1<< " is : ";
        for(j=i-1; j>0; j--)
        {
            cout<<octnum[j];
        }
 cout<<"\n";
}

