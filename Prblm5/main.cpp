#include<iostream>

int main (){

    int n;
    int i;
    int check=0;

    std::cout << "Input a number to check prime or not : ";
    std::cin >> n;

    for (i={1}; i<=n; i++){
        if(n%i ==0){

            check++;
        }

    }
    if (check==2){
        std::cout << "The entered number is a prime number." <<std::endl;
    }else{
        std::cout << "The entered number is not a prime number." <<std::endl;
    }


return 0;
}
