//programa qu etroca o número por função, usando variáveis por referência.

#include <iostream>

using namespace std;

void troca(int &px, int &py)
{
    int temp;

    temp = px;
    px = py;
    py = temp;
}

int main()
{
    int a, b;

    cout << "Entre com dois números inteiros: ";
    cin >> a >> b;

    cout << "Voce entrou com " << a << " e " << b << endl;
    // Troca a com b -- passa argumentos por referencia
    troca(a, b);
    cout << "Trocados, eles sao " << a << " e " << b << endl;
}