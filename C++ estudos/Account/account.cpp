#include <string>
#include <iostream>
#include "account.h"

using std::cout;
using std::endl;
using std::string;

Account::Account(string name, int initialBalance){
    setClientName(name);
    
    if(initialBalance >= 0){
        value = initialBalance;
    }else{
        value = 0;
        cout << "Erro: saldo inicial invalido" << endl;
    }
}
void Account::setClientName(string name){
    clientName = name;
}

string Account::getClientName() const{
    return clientName;
}

int Account::credit(int amount){
    return value += amount; 
}

int Account::debit(int amount){
    if(value < amount){
        cout << "Debit amount exceeded account balance" << endl;
        return 0;
    }else{
        cout << "Debit Success!!!" << endl;
        return value -= amount;
    }
}

int Account::getBalance() const{
    return value;
}

void Account::displayClientName() const{
    cout << "Welcome "<< getClientName() << "!" << endl;
}

void Account::displayValue() const{
    cout << "Your Balance is $"<< getBalance() << endl;
}