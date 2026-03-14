#include <stdio.h>

main()
{
    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("\nO numero %d e divisivel por 3 e 7", num);
    }
    else
    {
        printf("\nO numero %d nao e divisivel por 3 e 7", num);
    }
    return(0);
}