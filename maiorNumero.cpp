//programa que imprime o maior entre três numeros. 

#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3; //variáveis 

    cout << "Entre com três números inteiros: "; //saída
    cin >> num1 >> num2 >> num3; //entrada dos três numeros pelo usuário.

    if (num1 > num2) { //testa se num1 é maior que num2
        if (num1 > num3) //testa se num1 é maior que num2
            cout << "O maior número eh: " << num1 << endl; //se verdadeiro, retorna num1
        else 
            cout << "O maior numero eh: " << num3 << endl; //se não, retorna num3
    }
    else {
        if (num2 > num3) //testa se num2 é maior do que num3
            cout << "O maior numero eh: " << num2 << endl; //se verdadeiro, retorna num2
        else 
            cout << "O maior numero eh: " << num3 << endl; //se falso, retorna num3
    }
}