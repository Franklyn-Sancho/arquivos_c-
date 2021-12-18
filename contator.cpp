//programa que conta até 5 

#include <iostream>
using namespace std;

int main() {

    int contador = 0;
    
    while(contador < 5) { //enquanto contador for menor do que 5
        cout << "Contador = " << contador << endl;
        contador = contador + 1; //vai continuar somando um na variável contador. 
    }

    cout << "Acabou!!!!" << endl;
}