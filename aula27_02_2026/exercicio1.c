#include <stdio.h>
int main()
{
    int n, ant, suc;

    printf("\nDigite um numero inteiro\n");

    scanf("%d%*c", &n);
    //Descobrir antecessor e sucessor
    ant = n - 1;
    suc = n + 1;
    //Resultado
    printf("O antecessor e: %d", ant);
    printf("\nE o sucessor e: %d" , suc);

    getchar();
    return 0;
}