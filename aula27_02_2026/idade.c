#include <stdio.h> /*insere o conteudo do arquivo stdio.h*/

main()
{/*declaração das variaveis*/
    int idade, ano;
    float altura;
    char nome[30];
    /*entrada de dados*/
    printf("Digite o seu nome: ");/*mensagem ao usuário*/
    scanf("%s", nome);/*leitura do nome*/
    printf("Digite a idade: ");/*mensagem ao usuário*/
    scanf("%d", &idade);/*leitura do idade*/
    printf("Digite a altura: ");/*mensagem ao usuário*/
    scanf("%f", &altura);/*leitura do altura*/
    /*processamento*/
    ano = 2026 - idade; /*calculo do ano de nascimento*/
    /*saída de dados*/
    printf("\nO nome e: %s", nome);
    printf("\nA altura e: %.2f", altura);
    printf("\nA idade e: %d", idade);
    printf("\nO ano de nascimento e: %d", ano);
}