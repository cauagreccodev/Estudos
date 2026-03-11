#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main(){
    int n1;
    int n2;

    cout << "entre n1 e n2 para comparar: ";
    cin >> n1 >> n2;

    if(n1 == n2)
    cout << n1 << " == " << n2 << endl;
    
    if (n1!=n2)
    cout << n1 << " != " << n2 << endl;

    if(n1 < n2)
    cout << n1 << " < " << n2 << endl;

    if(n1 > n2)
    cout << n1 << " > " << n2 << endl;

    if(n1 <= n2)
    cout << n1 << " <= " << n2 << endl;

    if(n1 >= n2)
    cout << n1 << " >= " << n2 << endl;
}