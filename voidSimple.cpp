//funçao simples com void e retorno. 

#include <iostream>
using namespace std;

int main(void) 
{
    int ch;

    cout << "Você quer ler as instruções? (s/n): ";
    ch = cin.get();

    if (ch == 'n' || ch == 'N' )
        return false;

    cout << "escrever as instruções aqui... ";
        return false;
}