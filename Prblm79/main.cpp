#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

unsigned long Hex_To_Dec(char hex[])
{
  char *hexstring;
  int length = 0;
  const int hexbase = 16;
  unsigned long dnum = 0;
  int i;
  for (hexstring = hex; *hexstring != '\0'; hexstring++)
  {
      length++;
    }
  hexstring = hex;
  for (i = 0; *hexstring != '\0' && i < length; i++, hexstring++)
  {
      if (*hexstring >= 48 && *hexstring <= 57)
	  {
          dnum += (((int)(*hexstring)) - 48) * pow(hexbase, length - i - 1);
        }
      else if ((*hexstring >= 65 && *hexstring <= 70))
	  {
          dnum += (((int)(*hexstring)) - 55) * pow(hexbase, length - i - 1);
        }
      else if (*hexstring >= 97 && *hexstring <= 102)
	  {
          dnum += (((int)(*hexstring)) - 87) * pow(hexbase, length - i - 1);
        }
      else {
          cout<<" The given hexadecimal number is invalid. \n";
        }
    }
  return dnum;
}
int  main()
{
  unsigned long dnum;
  char hex[9];
	cout << "\n\n Convert any hexadecimal number to decimal number:\n";
	cout << "------------------------------------------------------\n";
	cout << " Input any 32-bit Hexadecimal Number: ";
    cin>>hex;
 dnum = Hex_To_Dec(hex);
  cout<<" The value in decimal number is: "<<dnum<<"\n";
}

