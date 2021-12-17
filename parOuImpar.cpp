/** 
 * programa que verifica se o número é par ou impar e retorna a mensagem: 
 * "numero par" ou "numero impar"
 */

#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Entre com um inteiro"
    cin >> num;

    if(num % 2 == 0)
        cout << "O numero eh par. \n";
    else 
        cout << "O numero é impar. \n"
}
