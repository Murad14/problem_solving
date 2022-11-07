#include <iostream>
using namespace std;

int main()
{
   int i,j,r;
    cout << "Input number of rows (half of the diamond): ";
    cin >> r;
   for(i=0;i<=r;i++)
   {
     for(j=1;j<=r-i;j++)
     {
         cout<<" ";
     }

     for(j=1;j<=2*i-1;j++)
     {
        cout<<"*";

     }cout<<endl;

   }
   for(i=r-1;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;;
   }
}
