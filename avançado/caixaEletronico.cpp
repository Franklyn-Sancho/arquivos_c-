/*****************************************************************
* Caixa eletronico simples
* o saldo e o valor a ser alterado e entrado pelo usuario
* a saida do programa e’ o saldo atualizado, incluindo juros
*****************************************************************/

#include <iostream> //entrada e saída do usuário. 
using namespace std;

#define JUROS 0.07 //valor de juros definido globalmente. 

void credito(float); //variável credito float sem retorno
void debito(float); //variável debito float sem retorno
void juros(void); //variável juros float sem retorno

float saldo; //variável flutuante saldo; 

main()
{
    float valor; //variável valor

    cout << "Entre com o saldo atual: "; //saída do programa pedindo o saldo
    cin >> saldo; //interpretador de entrada da variável.
    cout << "Deposito: "; //saída do programa pedindo o deposito
    cin >> valor; //interpretador de entrada da variável.
    credito(valor); //retorna o valor depositado. 
    cout << "Retirada: ";
    cin >> valor; //interpretador de entrada da variável.
    debito(valor); //retornar o valor retirado. 
    juros(); //retorna o valor dos juros, ou seja, 7%
    cout << "Juros " << JUROS * 100 << "%.\n";
    cout << "Saldo = " << saldo << endl;

}

void credito(float val) 
{
    saldo += val; //operador do crédito. saldo + valor de crédito (deposito)

}

void debito(float val)
{
    saldo -= val; //operador do debito. saldo - valor de retirada (debito ou retirada)
}

void juros(void)
{
    saldo += (saldo * JUROS); //operador de saldo multiplicado pelo juros. 
}

/* 
   Entre com o saldo atual: 1000
   Deposito: 500
   Retirada: 200
   Juros 7%.
   Saldo = 1391 
 */