#include <stdio.h>

int main(){
    float salario, sal_final;

    printf("\nInforme o seu salario R$");
    scanf("%f", &salario); // Lê o salário do funcionário

    if (salario > 1000) // Verifica se o salário é superior a R$1000
    {
        printf("\nPelo visto seu salario e superior a R$1000. Infelizmente nao tem direito ao aumento. :(");
    }
    else // Caso o salário seja menor ou igual a R$1000
    {
        sal_final = (salario * 0.30f) + salario; // Calcula o salário final com aumento de 30%
        printf("\nCoisa boa! Voce esta apto a ganhar o aumento de 30%%.\nSeu salario final eh de R$%.2f.\nPode ir tomar uma gelada!", sal_final);
    }

    return(0);
}