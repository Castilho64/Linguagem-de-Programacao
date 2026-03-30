#include <stdio.h>

int main(){
    float kwh, preco;
    int op;

    printf("Digite a quantidade de kWh consumido: ");
    scanf("%f", &kwh); // Lê a quantidade de kWh consumido

    printf("Qual o seu tipo de instalacao: \n1 - Residencial \n2 - Comercial \n3 - Industrial \nSua resposta: ");
    scanf("%d", &op); // Lê o tipo de instalacao

    switch(op)
    {
        case 1: // Residencial
            if (kwh <= 500) // Verifica se o consumo e menor ou igual a 500 kWh
            {
                preco = kwh * 0.4f; // Calcula o preco com tarifa de R$0,40 por kWh
                printf("Seu consumo foi de %g kWh entao voce ira pagar R$%.2f", kwh, preco);
            }
            else
            {
                preco = kwh * 0.65f; // Calcula o preco com tarifa de R$0,65 por kWh
                printf("Seu consumo foi de %g kWh entao voce ira pagar R$%.2f", kwh, preco);
            }
            break;
        case 2: // Comercial
            if (kwh <= 1000) // Verifica se o consumo e menor ou igual a 1000 kWh
            {
                preco = kwh * 0.55f; // Calcula o preco com tarifa de R$0,55 por kWh
                printf("Seu consumo foi de %g kWh entao voce ira pagar R$%.2f", kwh, preco);
            }
            else
            {
                preco = kwh * 0.6f; // Calcula o preco com tarifa de R$0,60 por kWh
                printf("Seu consumo foi de %g kWh entao voce ira pagar R$%.2f", kwh, preco);
            }
            break;
        case 3: // Industrial
            if (kwh <= 5000) // Verifica se o consumo e menor ou igual a 5000 kWh
            {
                preco = kwh * 0.55f; // Calcula o preco com tarifa de R$0,55 por kWh
                printf("Seu consumo foi de %g kWh entao voce ira pagar R$%.2f", kwh, preco);
            }
            else
            {
                preco = kwh * 0.6f; // Calcula o preco com tarifa de R$0,60 por kWh
                printf("Seu consumo foi de %g kWh entao voce ira pagar R$%.2f", kwh, preco);
            }
            break;
        default: // Caso o usuario digite uma opcao invalida
            printf("Operacao invalida!");
            break;
    }

    return(0);
}