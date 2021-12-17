//programa que testa se um triangulo é reto. 

#include <iostream>
using namespace std;

int main() {

    int lado1, lado2, lado3;
    int s1, s2, s3;

    cout << "Entre com o tamanho dos lados do trangulo: ";
    cin >> lado1 >> lado2 >> lado3;

    s1 = lado1*lado1;
    s2 = lado2*lado2;
    s3 = lado3*lado3;

    if(lado1 > 0 && lado2 > 0 && lado3 > 0) {
        if (s1==s2+s3 || s2 == s1 + s2 || s2 == s1 + s3) 
            cout << "Triangulo reto\n";
    }
    else {
        cout << "Não pode ser um triangulo!\n";
    }


}