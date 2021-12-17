//o cin nos permite colocar valores de entrada no teclado. Observe o programinha abaixo

#include <iostream>
using namespace std;

int main() {
    int idade; //variável idade recebe um inteiro. 

    cout << "entre com a sua idade: "; //saída
    cin >> idade; //entrada

    cout << "Voce tem " << idade << " anos." << endl; //retorno final
}