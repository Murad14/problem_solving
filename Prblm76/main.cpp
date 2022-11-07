#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long octal_num, decimal_num = 0;
     int i = 0;
	cout << "\n\n Convert any octal number to decimal number:\n";
	cout << "----------------------------------------------------\n";
	cout << " Input any octal number: ";
	cin>> octal_num;
    while (octal_num != 0)
     {
      decimal_num = (long)(decimal_num + (octal_num % 10) * pow(8,

i++));
      octal_num = octal_num / 10;
     }
    cout<<" The equivalent decimal number: " << decimal_num << "\n";
}

