#include <iostream>

using namespace std;

int main()
{
    int x;
    int *ptr;
    x = 5;
    ptr = &x;

    cout << "O valor da variável X e: " << *ptr << ptr << endl;
    *ptr = 10;
    cout << "Agora, X vale: " << *ptr << endl;
}