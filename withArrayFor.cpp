//programa que calcula a média de uma turma com array e operadores. 

#include <iostream>
#define ESTUDANTES 4
using namespace std;



int main()
{
    int indice, nota[ESTUDANTES];
    float total;

    for (indice = 0; indice < 4; indice += 1)
    {
        cout << "Entre com a nota do estudante " << indice << ": ";
        cin >> nota[indice];
    }

    cout << "Notas: ";

    for (indice = 0; indice < 4; indice += 1)
    {
        cout << nota[indice] << " ";
        total = total + nota[indice];
    }
    cout << endl << "Media: " << total / 4 << endl;
}