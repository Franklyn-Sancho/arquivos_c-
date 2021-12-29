//Programa em c++ que lê arquivos. 

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fp;

    char fnome[13];
    char ch;

    cout << "Entre com um nome de arquivo: ";
    cin >> fnome;

    fp.open(fnome, ios::in); //Abre arquivo

    if (fp.fail()) 
    {
        printf("Erro ao abrir %s\n", fnome);
    }
    else 
    {
        printf ("Arquivo aberto com sucesso. \n");
    }

    while((ch = fp.get()) != EOF)
        cout << ch;

    fp.close();
}