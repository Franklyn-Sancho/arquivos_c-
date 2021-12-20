//programa que soma sempre + 1 nos contadores. 

#include <iostream>
using namespace std;

int main() 
{
    int contador, total;

    for(contador = 0, total = 0; contador < 10; contador += 1) 
    {
        total += contador;
        cout << "contador = " << contador << ", total = " << total << endl;
    }
}

/** 
 *  contador = 0, total = 0
    contador = 1, total = 1
    contador = 2, total = 3
    contador = 3, total = 6
    contador = 4, total = 10
    contador = 5, total = 15
    contador = 6, total = 21
    contador = 7, total = 28
    contador = 8, total = 36
 *  contador = 9, total = 45
 */