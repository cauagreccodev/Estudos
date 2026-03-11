#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int n1;
    int n2;
    int maior;

    cout << "entre n1: ";
    cin >> n1;

    cout<< "entre n2: ";
    cin >> n2;

    if(n1 > n2)
        maior = n1;
    else
        maior = n2;
    
    cout << "O maior numero e " << maior << endl;
}