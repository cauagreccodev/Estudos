#include <iostream>


int main(){
    int n1,n2,sum;

    std::cout << "entre com n1: ";
    std::cin >> n1;

    std::cout << "entre com n2:";
    std::cin >> n2;

    sum = n1 + n2;

    std::cout <<"soma: " << sum << std::endl;
    std::cout <<"produto: "<< n1*n2 << std::endl;
    std::cout <<"diferenca:"<< n1-n2 << std::endl;
    std::cout <<"quociente:"<< n1/n2 << std::endl;
    return 0;
}