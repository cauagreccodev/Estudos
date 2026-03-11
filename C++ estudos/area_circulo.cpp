#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    float pi = 3.14159,raio;

    cout << "Raio do circulo: ";
    cin >> raio;

    cout << "Diametro: " << 2*raio << endl;
    cout << "Circunferencia: "<< 2*pi*raio << endl;
    cout << "Area: "<< pi*raio << endl; 
}