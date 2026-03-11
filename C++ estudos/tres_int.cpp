#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int n1,n2,n3,menor,maior;

    cout << "insira n1: ";
    cin >> n1;

    cout << "insira n2: ";
    cin >> n2;

    cout << "insira n3:";
    cin >> n3;

    if(n1>n2 && n1>n3){
        maior = n1;
    }
    else if(n2>n1 && n2>n3){
        maior = n2;
    }
    else if(n3>n1 && n3>n2){
        maior = n3;
    }
    
    if(n1<n2 && n1<n3){
        menor = n1;
    }
    else if(n2<n1 && n2<n3){
        menor = n2;
    }
    else if(n3<n1 && n3<n2){
        menor = n3;
    }
    
    cout << "Soma: " << n1+n2+n3 << endl;
    cout << "Media: "<< (n1+n2+n3)/3 << endl;
    cout << "Produto: " << n1*n2*n3 << endl;
    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;
}