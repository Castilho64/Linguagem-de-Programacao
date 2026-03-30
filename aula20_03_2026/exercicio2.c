#include <stdio.h>

int main(){
    int km_andar;
    float pagar;

    printf("Digite quantos KMs voce pretende viajar: ");
    scanf("%d", &km_andar); // Lê a quantidade de KMs

    if(km_andar <= 200) // Verifica se a distância é menor ou igual a 200KM
    {
        pagar = km_andar * 0.50f; // Calcula o preço com tarifa de R$0,50 por KM
        printf("Como voce ira percorrer %dKm. \nVoce vai pagar R$%.2f pela passagem.", km_andar, pagar);
    }
    else // Caso a distância seja maior que 200KM aplica desconto de R$0,45 por KM
    {
        pagar = km_andar * 0.45f; // Calcula o preço com tarifa reduzida de R$0,45 por KM
        printf("Como voce ira percorrer %dKm. \nVoce vai pagar R$%.2f pela passagem.", km_andar, pagar);
    }

    return(0);
}