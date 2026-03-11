#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "account.h"

int main(){
    Account conta1("Caua",100);
    Account conta2("Maria Fernanda",-100);
    int opt = 0;
    cout << "Bem vindo: " << conta1.getClientName() << endl;
    cout << "saldo inicial: "<< conta1.getBalance() << endl;

    while(opt != 3){
        cout << "options: [1] credit [2] debit [3] exit"<< endl;
        cout << "digit your option: ";
        cin >> opt;
        if (opt == 1){
            int amount;
            cout << "Digit amount of credit: ";
            cin >> amount;
            conta1.credit(amount);
            
            cout << "New balance: $" << conta1.getBalance() << endl; 
        }
        else if(opt == 2){
            int amount;
            cout << "digit amount of debit: ";
            cin >> amount;
            conta1.debit(amount);

            cout << "New balance: $" << conta1.getBalance() << endl;
        }
        else if(opt == 3){
            cout << "exiting system..." << endl;
        }
        else{
            cout << "invalid option! Try again..." << endl;
        }
    }

    opt = 0;

    cout << "Bem vindo: " << conta2.getClientName() << endl;
    cout << "saldo inicial: "<< conta2.getBalance() << endl;

    while(opt != 3){
        cout << "options: [1] credit [2] debit [3] exit"<< endl;
        cout << "digit your option: ";
        cin >> opt;
        if (opt == 1){
            int amount;
            cout << "Digit amount of credit: ";
            cin >> amount;
            conta2.credit(amount);
            
            cout << "New balance: $" << conta2.getBalance() << endl; 
        }
        else if(opt == 2){
            int amount;
            cout << "digit amount of debit: ";
            cin >> amount;
            conta2.debit(amount);

            cout << "New balance: $" << conta2.getBalance() << endl;
        }
        else if(opt == 3){
            cout << "exiting system..." << endl;
        }
        else{
            cout << "invalid option! Try again..." << endl;
        }
    }
}