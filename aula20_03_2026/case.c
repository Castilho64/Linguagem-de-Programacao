#include <stdio.h>

int main(){
    float n1, n2, resultado; // Variáveis para os números e resultado
    int op; // Variável para a escolha da operação

    printf("Digite o primeiro numero: "); // Solicita o primeiro número
    scanf("%f", &n1); // Lê o primeiro número

    printf("\nDigite o segundo numero: "); // Solicita o segundo número
    scanf("%f", &n2); // Lê o segundo número

    printf("Escolha a operacao: \n1 - Soma \n2 - Subtracao \n3 - Multiplicacao \n4 - Divisao \nDigite aqui sua escolha: "); // Solicita a escolha da operação
    scanf("%d", &op); // Lê a escolha da operação

    switch(op)
    {
        case 1:
            resultado = n1 + n2; // Realiza a soma
            printf("A soma de %g + %g e: %g", n1, n2, resultado);
            break;
        case 2:
            resultado = n1 - n2; // Realiza a subtração
            printf("A subtracao de %g - %g e: %g", n1, n2, resultado);
            break;
        case 3:
            resultado = n1 * n2; // Realiza a multiplicação
            printf("A multiplicacao de %g * %g e: %g", n1, n2, resultado);
            break;
        case 4: // Esse Case realiza a divisão mas antes irá conferir se o segundo número é zero para evitar divisão por zero
            if (n2 == 0.0f) // Verifica se o segundo número e zero para evitar divisão por zero
            {
                printf("Divisao por 0 impedida. Digite outro numero.");
            }
            else
            {
                resultado = n1 / n2; // Realiza a divisão
                printf("A divisao de %g / %g e: %g", n1, n2, resultado);
            }
            break;
        default: // Caso o usuario digite uma opção inválida, o programa irá informar que a opção é inválida
            printf("\nOpcao Invalida!");
            break;
    }

    return (0);
}