//criando uma aplicação capaz de calcular a área e o perímetro de um circulo. 

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14 //valor de PI 


int main() {
    int Raio; //Variavel do Raio recebe inteiro
    float Perim, Area; //variável perim e area recebe valor flutuante

    cout << "Entre com o valor do Raio: "; //mensagem de saída
    cin >> Raio; //entrada

    //formula para calcular o perimetro do circulo. 
    Perim = 1 * PI * Raio;

    //formula para calcular a área do círculo
    Area = PI * pow(Raio, 2);

    cout << "O perimetro da circurferência de raio " << Raio
         << " eh " << Perim << endl;
    cout << "e a área eh " << Area << endl;

}