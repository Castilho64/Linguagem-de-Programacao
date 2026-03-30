#include <stdio.h>

int main(){

    int idade;

    printf("\nInforme a sua idade: "); // Solicita ao usuário que informe sua idade
    scanf("%d", &idade);

    if (idade >= 18){ // Verifica se a idade é maior ou igual a 18
        printf("Voce e maior de idade!");
    }
    else { // Caso contrário, a pessoa é menor de idade
        printf("Voce e menor de idade!");
    }
    return(0);
}