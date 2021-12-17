//programa que verifica se o número é par e positivo. 

#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Entre com um inteiro: ";
    cin >> num;

    if (num >= 0) {
        if (num % 2 == 0)
            cout << "O número eh par e positivo\n";
        else 
            cout << "O número eh impar e positivo\n";
    }
    else {
        if(num % 2 == 0)
            cout << "O numero é par e negativo\n";
        else 
            cout << "O numero e impar e negativo\n";
    }


}