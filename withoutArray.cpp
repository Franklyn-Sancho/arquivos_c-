//programa que calcula a média de uma turma. 

#include <iostream>
using namespace std;

int main() 
{
    int nota0, nota1, nota2, nota3;
    int media;

    cout << "Entre com a nota do estudante 0: ";
    cin >> nota0;
    cout << "Entre com a nota do estudante 1: ";
    cin >> nota1;
    cout << "Entre com a nota do estudante 2: ";
    cin >> nota2;
    cout << "Entre com a nota do estudante 3: ";
    cin >> nota3;

    media = (nota0 + nota1 + nota2 + nota3) / 4;

    cout << "Notas: " << nota0 << " " << nota1 << " " << nota2
         << " " << nota3 << endl;

    cout << "Media: " << media << endl;
}

/** 
 * Apesar do programa ter funcionado perfeitamente, temos um problema. 
 * E se eu ao invés de 4 alunos, tivessemos 50? nosso código ficaria 
 * imenso, não? Para resolver esse problema, basta criar um array. 
 * Veja o exemplo "withArray.cpp" 
 */