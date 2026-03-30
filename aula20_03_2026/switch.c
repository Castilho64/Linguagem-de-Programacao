#include <stdio.h>

int main(){
    int i; // Declaração da variável inteira
    printf("Insira um numero inteiro de 1 a 5: "); // Solicita ao usuário que insira um número inteiro de 1 a 5
    scanf("%d", &i);

    switch(i){

        case 1: // Caso o valor de i seja 1
        printf("Numero 1 foi digitado.");
        break;
        case 2: // Caso o valor de i seja 2
        printf("Numero 2 foi digitado.");
        break;
        case 3: // Caso o valor de i seja 3
        printf("Numero 3 foi digitado.");
        break;
        case 4: // Caso o valor de i seja 4
        printf("Numero 4 foi digitado.");
        break;
        case 5: // Caso o valor de i seja 5
        printf("Numero 5 foi digitado.");
        break;
        default: // Caso o valor de i não seja nenhum dos casos anteriores
        printf("Numero invalido! Desprovido de inteligencia");
        break;
    }
    return 0;
}

// Switch é uma estrutura de controle de fluxo que permite executar diferentes blocos de código com base no valor de uma expressão. Neste exemplo, 
//o programa solicita ao usuário que insira um número inteiro de 1 a 5 e, em seguida, utiliza a estrutura switch para determinar qual mensagem 
//exibir com base no número digitado. Se o número digitado não estiver entre 1 e 5, a mensagem "Numero invalido! Desprovido de inteligencia" será exibida.