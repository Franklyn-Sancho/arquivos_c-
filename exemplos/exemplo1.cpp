//escreva um programa que leia um número inteiro e imprima zero se for par e 1 se for impar. 

#include <iostream>
using namespace std;

int main() {

    int numero; //variavel número recebe um inteiro

    cout << "Entre com um numero inteiro: "; //mensagem de saída 
    cin >> numero; //entrada do número inteiro pelo usuario
    cout << "\nPar? " << numero % 2 << endl; //se for verdadeiro, retorna 1; se não, retorna 0
}
