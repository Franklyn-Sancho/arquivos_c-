//exemplo de um array de string. 

#include <iostream>
using namespace std;

#define NUM_NOMES 5
#define TAM       20

int main() 
{
    char nomes [NUM_NOMES] [TAM] = {"Franklyn Sancho",
                                    "Simão Coutinho",
                                    "Lilo Coutinho",
                                    "Husky Sancho",
                                    "Luísa Coutinho"
                                    };

    int i;

    for (i = 0; i < 4; i++)
        cout << nomes[i] << endl;
}