#include <stdio.h>

int main()
{
    int idade;
    char nome[20];
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    getchar();
    printf("Informe o seu nome: ");
    scanf(" %s", nome);

    if (idade <= 18) //Até 18 anos
    {
        printf("%s, sua mensalidade e de R$ 50,00", nome);
    }
    else if (idade >= 19 && idade <= 29) //De 19 a 29 anos
    {
        printf("%s, sua mensalidade e de R$ 70,00", nome);
    }
    else if (idade >= 30 && idade <= 45) //De 30 a 45 anos
    {
        printf("%s, sua mensalidade e de R$ 90,00", nome);
    }
    else if (idade >= 46 && idade <= 65) //De 46 a 65 anos
    {
        printf("%s, sua mensalidade e de R$ 130,00", nome);
    }
    else //Acima de 65 anos
    {
        printf("%s, sua mensalidade e de R$ 170,00", nome);
    }

    return(0);
}