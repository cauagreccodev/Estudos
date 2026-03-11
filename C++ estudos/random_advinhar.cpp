#include <iostream>
#include <random>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;


int random(int min, int max){

    static std::mt19937 gen(time(nullptr));

    std::uniform_int_distribution<> distrib(min,max);

    return distrib(gen);
}

int main(){
    int n_maquina = random(1,1000);
    int n_pessoa;
    cout << n_maquina << endl;

    while(n_pessoa != n_maquina){
        cout << "Adivinhe o valor que pensei: ";
        cin >> n_pessoa;
    }

    cout << "acertou o numero!!!";
    return 0;
}

