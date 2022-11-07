#include <iostream>
using namespace std;
int main()
{
    int bs, ex, num=1,i;
    cout << "\n\n Find power of any number using for loop:\n";
    cout << "---------------------------------------------\n";
    cout << " Input the base: ";
    cin >> bs;
    cout << " Input the exponent: ";
	cin>>ex;

    for (i = 1; i <=ex; i++)
    {
       num=num*bs;
    }
	cout <<bs<<" ^ "<<ex<<" = "<<num<<endl ;
}
