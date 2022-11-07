#include <iostream>

using namespace std;

int main()
{
    int64_t binaryNumber, decimalNumber = 0, weight = 1, remainder;

	cout << " Input a binary number: ";
	cin>> binaryNumber;
    while (binaryNumber != 0)
    {
        remainder = binaryNumber % 10;
        decimalNumber = decimalNumber + remainder * weight;
        weight = weight * 2;
        binaryNumber = binaryNumber / 10;


    }cout<<" The decimal number: " << decimalNumber<<"\n";

}

