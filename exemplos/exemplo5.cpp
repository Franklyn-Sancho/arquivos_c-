//exemplo de uma calculadora simples em C++

#include <iostream>
#include <iomanip> //incluindo setprecision
using namespace std;

int main() {

    float num1, num2; //variáveis; 
    char op; //operador. 

    cout << "Entre com um número, um operador, outro número: ";
    cin >> num1 >> op >> num2;

    if (op == '+') 
        cout << " = " << setprecision(2) << num1 + num2;
    else if (op == '-') 
        cout << " = " << setprecision(2) << num1 - num2;
    else if (op == '*') 
        cout << " = " << setprecision(2) << num1 * num2;
    else if (op == '/') 
        cout << " = " << setprecision(2) << num1 / num2;
    else 
        cout << "Operador inválido";
    cout << endl;
    
}

//continuar na página 27