//Programa simples que cumprimenta o usuário. 

#include <iostream>
using namespace std;

int cumprimenta(char inic1, char inic2) //função que retorna o cumprimento inicial: "olá"
{
    cout << "Olá, " << inic1 << inic2 << "!" << endl;
}

int main() 
{
    char primeiro, segundo;

    cout << "Entre com duas inicias (sem separação): ";
    cin >> primeiro >> segundo;
    cumprimenta(primeiro, segundo);
}