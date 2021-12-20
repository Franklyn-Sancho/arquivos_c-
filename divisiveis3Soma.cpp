//Um programa que imprime todos os números entre 30 e 5 (nesta ordem) divisíveis por 3, e
//no final imprime sua soma.

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int i, soma;

    soma = 0; 

    for (i = 30; i >= 5; i -= 1)
    {
        if((i % 3) == 0) 
        {
            cout << "\t" << setw(2) << i << endl;
            soma += i;
        }
    }
    cout << "\t soma = " << soma << endl;
}