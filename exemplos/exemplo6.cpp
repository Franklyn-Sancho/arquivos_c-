//programa que soma os números digitados pelo usuário até chegar 20. 

#include <iostream>
using namespace std;

int main() {

    int total, num; //variáveis 
    total = 0; //total começa com zero

    while (total < 20) //enquanto total for menor do que 20, a função continua rodando. 
    {
        cout << "Total = " << total << endl;
        cout << "Entre com um número: ";
        cin >> num;

        total = total + num; //soma 
    }

    cout << "Final total = " << total << endl; //retorno final, quando termina o loop
}