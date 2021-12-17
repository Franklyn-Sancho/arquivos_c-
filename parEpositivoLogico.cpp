//Programa que testa se um numero é par, impar, positivo ou negativo com lógica. 

#include <iostream>

using namespace std;

int main() {

    int num; 

    cout << "Entre com um número inteiro: ";
    cin >> num;

    if (num >= 0 && (num % 2 == 0))
        cout << "Numero par e positivo";
    else 
        cout << "Ou o número é impar ou negativo";
}