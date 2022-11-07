#include <iostream>
using namespace std;

int main()
{
   int i,j,n;
    cout << "\n\n Display a pattern using odd number of numbers, the n numbers of columns will appear in 1st row:\n";
    cout << "----------------------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
    for(i=n;i>=1;i--)
   {
     /* print blank spaces */
     for(j=1;j<=n+5-i;j++)
	cout<<" ";
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       cout<<j;

     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	  cout<<j;
     cout<<endl;
   }
}

