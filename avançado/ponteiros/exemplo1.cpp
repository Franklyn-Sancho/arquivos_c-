//programa com ponteiros 

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int *ptr; //declara um ponteiro

    a = 90;
    b = 2;
    c = 3;
    ptr = &a;

    printf("Valor de ptr: %p, Conteúdo de ptr: %d\n", ptr, *ptr);
    printf("B: %d, C: %d", b, c);
}

//Valor de ptr: 0x7fffffffdb54, Conteúdo de ptr: 90