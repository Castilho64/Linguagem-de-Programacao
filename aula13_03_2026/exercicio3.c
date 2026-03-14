#include <stdio.h>

main()
{
    float n1, n2, n3, media;

    printf("Informe a Nota 1: ");
    scanf("%f", &n1);
    printf("Informe a Nota 2: ");
    scanf("%f", &n2);
    printf("Informe a Nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if(media < 6)
    {
        printf("\nReprovado! Sua media foi de: %.2f", media);
    }
    else
    {
        printf("Aprovado! Sua media foi de: %.2f", media);
    }

    return(0);
}