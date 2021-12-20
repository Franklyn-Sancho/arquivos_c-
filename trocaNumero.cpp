//programa que troca os valores das variáveis. 

#include <iostream>
using namespace std;

int main() {

    int a, b, temp;

    cout << "Entre com dois números inteiros: ";
    cin >> a >> b;

    cout << "Você entrou com " << a << " e " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "Trocados, eles são: " << a << " e " << b << endl;
}