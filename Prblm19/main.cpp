#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Input the number upto: ";
    cin >> n;
    cout << endl << endl;

    for(int i = 1;i<=n;i++)
    {
        for(int a = 1; a<=10; a++)
        {
            int b = i * a;
            cout << i << " * " << a << " = " << b;
            cout<<endl;
        }
        cout << "====================" << endl;
    }


return 0;
}
