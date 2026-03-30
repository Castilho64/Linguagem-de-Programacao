#include <stdio.h>

int main(){
    float salario, sal_final;

    printf("\nInforme o seu salario R$");
    scanf("%f", &salario); // Lê o salário do funcionário

    if (salario > 1250) // Verifica se o salário é maior que R$1250
    {
        sal_final = (salario * 0.10f) + salario; // Calcula o salário final com aumento de 10%
        printf("\nO seu salario final apos o aumento de 10%% sera de R$%.2f", sal_final);
    }
    else // Caso o salário seja menor ou igual a R$1250
    {
        sal_final = (salario * 0.15f) + salario; // Calcula o salário final com aumento de 15%
        printf("\nO seu salario final apos o aumento de 15%% sera de R$%.2f", sal_final);
    }

    return(0);
}