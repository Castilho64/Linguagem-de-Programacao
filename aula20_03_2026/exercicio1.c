#include <stdio.h>

int main(){
    int km, velocidade;
    float multa; // float para permitir valores com centavos no futuro

    printf("Informe a velocidade em que o carro estava: ");
    scanf("%d", &km); // Lê a velocidade do carro

    if (km <= 80) // Verifica se o carro estava dentro do limite permitido
    {
        printf("Voce estava dentro do limite permitido.");
    }
    else
    {
        velocidade = km - 80; // Calcula quantos km acima do permitido
        multa = velocidade * 5.0f; // Calcula a multa (R$5 por cada Km acima do limite)
        printf("Voce ultrapassou %dKm acima do permitido (80Km/h).\nSua multa sera de R$%.2f", velocidade, multa);
    }

    return(0);
}