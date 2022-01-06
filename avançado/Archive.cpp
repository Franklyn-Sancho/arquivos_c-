//Construção de um programa que usa o fstream para fazer o get de arquivos na pasta. 

#include <iostream> //entrada e saída de teclado. 
#include <fstream> //put para arquivos. 

using namespace std;

int main()
{
    ifstream fp; //instanciando. 

    char fnome[13]; //variável com o nome do arquivo - máximo de 13 caracteres
    char ch;

    cout << "Entre com um nome de arquivo: "; //saída do programa
    cin >> fnome; //a entrada do cliente. 

    fp.open(fnome, ios::in); //Abre arquivo

    if (fp.fail()) //rotas de possibilidades. 
    {
        printf("Erro ao abrir %s\n", fnome); //erro: se o arquivo não for encontrado. 
    }
    else 
    {
        printf ("Arquivo aberto com sucesso. \n"); //se for encontrado; abre o arquivo e retorna sucesso
    }

    while((ch = fp.get()) != EOF)
        cout << ch;

    fp.close();
}