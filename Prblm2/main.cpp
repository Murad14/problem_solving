#include<iostream>

int main(){

    int i;
    int sum {0};
    std::cout << "The natural numbers are :" <<std::endl;
    for (i={1}; i<=10; ++i) {
        std::cout << i << " ";
        sum = sum + i;

    }
    std::cout<<std::endl;
    std::cout << "The sum of first 10 natural numbers: " << sum <<std::endl;



return 0;
}
