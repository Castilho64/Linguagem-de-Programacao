#include <stdio.h>

int main()
{
    float n1, n2, n3;
    float p1, p2, p3;
    float media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite o peso da primeira nota: ");
    scanf("%f", &p1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite o peso da segunda nota: ");
    scanf("%f", &p2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite o peso da terceira nota: ");
    scanf("%f", &p3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);

    printf("\nA media ponderada e: %.2f\n", media);

    return 0;
}