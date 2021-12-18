/**
 * Recebe dois conjuntos de 3 números e soma o maior valor de cada conjunto. 
 */

#include <iostream>
using namespace std;

int main() {

    int a, b, c, maior_1, maior_2;

    cout << "Insira três números: ";
    cin >> a >> b >> c; //primeiro conjunto de números

    maior_1 = a; //começamos deduzindo que o "a" é maior

    if (b > maior_1) //se "b" for maior que "a"
    {
        maior_1 = b; //então b é o maior
    }
    if (c > maior_1) //se "c" for maior que "b"
    {
        maior_1 = c; // então "c" é o maior do conjunto.
    }

    //a lógica se repete. 
    cout << "Insira três números: ";
    cin >> a >> b >> c;

    maior_2 = a;

    if (b > maior_2)
    {
        maior_2 = b;
    }
    if (c > maior_2)
    {
        maior_2 = c;
    }

    cout << endl << maior_1 << "+" << maior_2 
         << "=" << maior_1 + maior_2 << endl; //depois de verificar, soma os maiores valores do dois conjuntos. 
}