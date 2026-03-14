#include <stdio.h>

main()
{
    float num1, num2;
    //Mensagem solicitando primeiro numero
    printf("Digite o primeiro numero: ");
    //Recebe o primeiro número
    scanf("%f%*c", &num1);
    //Mensagem solicitando segundo numero
    printf("\nDigite o segundo numero: ");
    //Recebe o segundo número
    scanf("%f%*c", &num2);
    //Determina e mostra p maior número
    if(num1 > num2)
        printf("\nO maior numero: %f", num1);
    if(num2 > num1)
        printf("\nO maior numero: %f", num2);
    if(num1 == num2)
        printf("\nOs numeros sao iguais.");
        
    //Para o programa e espera pelo ENTER
    getchar();
}