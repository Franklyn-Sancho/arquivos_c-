//programa que calcula a média de uma turma usando array. 

#include <iostream>
using namespace std;

int main()
{
    int indice, nota[4];
    float total;

    indice = 0;

    while (indice < 4)
    {
        cout << "Entre com a nota do estudante " << indice << ": ";
        cin >> nota[indice];
        indice = indice + 1;
    }

    cout << "Notas: ";
    total = 0;
    indice = 0;

    while (indice < 4) 
    {
        cout << nota[indice] << " ";
        total = total + nota[indice];
        indice = indice + 1;

    }
    cout << endl << "Media: " << total / 4 << endl;
}
