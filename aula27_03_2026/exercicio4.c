#include <stdio.h>

int main(){
    float casa, salario;
    int meses;

    printf("\nInforme o valor da casa que deseja comprar R$");
    scanf("%f", &casa); // Lê o valor da casa

    printf("\nInforme o seu salario atual R$");
    scanf("%f", &salario); // Lê o salário do funcionário

    printf("\nInforme em quanto meses ira pagar: ");
    scanf("%d", &meses); // Lê a quantidade de meses

    // Verifica diretamente se a prestação ultrapassa 30% do salário
    if ((casa / meses) > (salario * 0.30f))
    {
        printf("\nVoce nao esta apto a ter o emprestimo para a compra da casa.");
    }
    else
    {
        printf("\nVoce esta apto ao emprestimo para comprar a sua casa. Parabens!");
    }

    return(0);
}