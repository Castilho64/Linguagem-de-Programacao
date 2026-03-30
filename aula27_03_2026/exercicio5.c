#include <stdio.h>

int main(){
    float salario, aumento;

    printf("\nInforme o seu salario R$");
    scanf("%f", &salario); // Lê o salário do funcionário

    if (salario <= 1000) // Salário até R$1000 - aumento de 35%
    {
        aumento = (salario * 0.35f) + salario; // Calcula o salário com aumento de 35%
        printf("\nSeu salario tera um aumento de 35%%, agora sera R$%.2f", aumento);
    }
    else if (salario > 1000 && salario <= 1500) // Entre R$1000 e R$1500 - aumento de 30%
    {
        aumento = (salario * 0.30f) + salario; // Calcula o salário com aumento de 30%
        printf("\nSeu salario tera um aumento de 30%%, agora sera R$%.2f", aumento);
    }
    else if (salario > 1500 && salario <= 2000) // Entre R$1500 e R$2000 - aumento de 20%
    {
        aumento = (salario * 0.20f) + salario; // Calcula o salário com aumento de 20%
        printf("\nSeu salario tera um aumento de 20%%, agora sera R$%.2f", aumento);
    }
    else if (salario > 2000 && salario <= 4000) // Entre R$2000 e R$4000 - aumento de 10%
    {
        aumento = (salario * 0.10f) + salario; // Calcula o salário com aumento de 10%
        printf("\nSeu salario tera um aumento de 10%%, agora sera R$%.2f", aumento);
    }
    else // Salário acima de R$4000 - sem aumento
    {
        printf("\nVoce ganha mais de R$4000 portanto nao tera aumento.");
    }

    return(0);
}