//testar retorno de um programa em C++ com o uso de "=" e "=="

#include <iostream>
using namespace std;

int main() {

    int x = 4;
    int y = 8;

    if (y = 8)
        if (x = 5)
            cout << "a ";
        else 
            cout << "b";
    
    cout << "c";
    cout << "d" << endl;
    //Output: a, c, d

    if (y = 8)
        if (x == 5)
            cout << "a ";
        else 
            cout << "b";
    
    cout << "c";
    cout << "d" << endl;
    //Output: b, c, d


}