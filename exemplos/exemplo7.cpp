/** 
 * Programa que verifica se 3 números podem ser o lado de uma triangulo por função no-void
 */

#include <iostream>
using namespace std;

int quadrado(int n)
{
    return n * n;
}

int main()
{

    int s1, s2, s3;

    cout << "Entre com três inteiros: ";
    cin >> s1 >> s2 >> s3;

    if (s1 > 0 && s2 > 0 && s3 > 0 &&
        (quadrado(s1) + quadrado(s2) == quadrado(s3) ||
         quadrado(s2) + quadrado(s3) == quadrado(s1) ||
         quadrado(s3) + quadrado(s1) == quadrado(s2)))
    {
        cout << " " << s1 << " " << s2 << " " << s3
             << " Podem formar um triangulo reto\n";
    }
    else
    {
        cout << " " << s1 << " " << s2 << " " << s3
             << " nao podem formar um triangulo reto\n";
    }

    //se entrarmos com os valores: 3, 4, 5 -> teremos como output que sim, podem ser um triangulo reto. 
}