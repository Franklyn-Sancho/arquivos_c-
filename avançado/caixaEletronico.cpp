/*****************************************************************
* Caixa eletronico simples
* o saldo e o valor a ser alterado e entrado pelo usuario
* a saida do programa e’ o saldo atualizado, incluindo juros
*****************************************************************/

#include <iostream>
using namespace std;

#define JUROS 0.07

void credito(float);
void debito(float);
void juros(void);

float saldo;

main()
{
    float valor;

    cout << "Entre com o saldo atual: ";
    cin >> saldo;
    cout << "Deposito: ";
    cin >> valor;
    credito(valor);
    cout << "Retirada: ";
    cin >> valor;
    debito(valor);
    juros();
    cout << "Juros " << JUROS * 100 << "%.\n";
    cout << "Saldo = " << saldo << endl;

}

void credito(float val) 
{
    saldo += val;

}

void debito(float val)
{
    saldo += val;
}

void juros(void)
{
    saldo += (saldo * JUROS);
}