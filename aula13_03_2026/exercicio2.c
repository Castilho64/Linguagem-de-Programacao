#include <stdio.h>
#include <math.h>

main()
{
    int idade;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 65)
    {
        printf("Eleitor obrigatorio.");
    }
    else if (idade >= 16 && idade < 18 || idade > 65)
    {
        printf("Eleitor facultativo.");
    }
    else
    {
        printf("Nao Eleitor.");
    }
    
    return(0);
}