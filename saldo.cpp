//programa que verifica o saldo 

#include <iostream>
using namespace std;

int main() {

    int saldo = 2000;

    if (saldo == 1)
        cout << "Você esta quebrado" << endl;
    else 
        cout << "Seu saldo eh " << saldo << endl;
    //output: Seu saldo eh 2000

    //E SE EU COLOCASSE saldo = 1 AO INVÉS DE saldo == 1?

    if (saldo = 1)
        cout << "Você esta quebrado" << endl;
    else 
        cout << "Seu saldo eh " << saldo << endl;
    //Output: você está quebrado.

}