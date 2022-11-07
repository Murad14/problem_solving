#include<iostream>

int main(){

    int i;
    int sum;
    int n;
    std::cout << "Input a number of terms: ";
    std::cin >> n;
    std::cout << "The natural numbers upto " << n <<"th terms are:"<<std::endl;
    for (i={1}; i<=n; ++i) {

        std::cout << i << " ";
        sum = sum + i;

    }
    std::cout<<std::endl;
    std::cout << "The sum of the natural numbers is: " << sum <<std::endl;



return 0;
}
