//soma os maiores valores de dois conjuntos com três números, agora com função... 

#include <iostream>
using namespace std;

//função que testa o maior número entre os dois conjuntos.
int acheMaior(int x, int y, int z) { 

    int maior;

    maior = x;

    if (y > maior) {
        maior = y;
    }
    if (z > maior) {
        maior = z;
    }

    return maior;

}


//função principal
int main() {

    int a, b, c, maior_1, maior_2;

    cout << "Insira três números inteiros: ";
    cin >> a >> b >> c;

    maior_1 = acheMaior(a,b,c);

    cout << "Insira novamente três números inteiros: ";
    cin >> a >> b >> c;

    maior_2 = acheMaior(a,b,c);

    cout << endl << maior_1 << " + " << maior_2
         << " = " << maior_1 + maior_2 << endl;

} 