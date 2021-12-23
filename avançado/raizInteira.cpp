//Programa que encontra a raiz quadrada

int raizInteira(int);

int raizInteira(int x)
{
    int palpite = 1;

    while(!(x >= palpite*palpite && x < (palpite+1)* (palpite+1)))
        {
            palpite = (x/palpite + palpite) / 2;
        }
    return palpite;
}