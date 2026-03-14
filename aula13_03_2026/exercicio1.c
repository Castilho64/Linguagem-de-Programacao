#include <stdio.h>
#include <math.h>

main()
{
    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    if(num % 5 == 0)
    {
        printf("\nO numero e divisivel por 5.");
    }
    else
    {
        printf("\nO numero nao e divisivel por 5.");
    }

    return(0);
}