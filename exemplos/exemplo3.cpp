/** 
 * programa que lê dois números e ordena o par caso o primeiro número 
 * for maior que o segundo.  
 */

#include <iostream> 
using namespace std;

int main() {
    int num1, num2, aux; //variáveis 

    cout << "Entre com dois números inteiros: "; //saída
    cin >> num1 >> num2; //entrada dos números. 

    if(num1 > num2) { //condicional. 
        aux = num1;
        num1 = num2;
        num2 = aux;
        cout << "Trocou \n";
    }

    cout << "Os números ordenados: " << num1 << " " << num2 << endl; //retorno

}