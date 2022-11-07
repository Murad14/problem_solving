#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,num=0,count=0;

    cout<<"Enter number"<<endl;
    cin >>n;
    num=n;

    while(num!=0){
        num/=10;
        count++;
        }
    int i=pow(10,count-1);

    for(;i>0;i/=10){
        num=n/i;
        n%=i;
    switch(num){
        case 0:
            cout<<"Zero ";
        break;

        case 1:
            cout<<"one ";
        break;

        case 2:
            cout<<"two ";
        break;

        case 3:
            cout<<"three ";
        break;

        case 4:
            cout<<"four ";
        break;

        case 5:
            cout<<"five ";
        break;

        case 6:
            cout<<"Six ";
        break;

        case 7:
            cout<<"Seven ";
        break;

        case 8:
            cout<<"Eight ";
        break;

        case 9:
            cout<<"Nine ";
        break;
        }
    }


return 0;
}
