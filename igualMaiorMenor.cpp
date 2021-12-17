//programa que mostra se dois números são iguais, se não, qual é maior e menor. 

#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Entre com o primeiro numero: ";
    cin >> num1;
    cout << "Entre com o segundo numero: ";
    cin >> num2;

    if (num1 == num2)
        cout << "Os números são iguais\n";
    else if (num1 > num2)
        cout << "O primeiro número é maior que o segundo\n";
    else
        cout << "O primeiro numero é menor que o segundo\n";
}