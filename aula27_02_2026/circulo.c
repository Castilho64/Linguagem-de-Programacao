#include <stdio.h>
#define PI 3.14159

int main()
{
    float raio, area;

    printf("\nDigite o raio do circulo: ");

    //Caso o usuário digite uma letra ou valor não númerico, o programa irá exibir uma mensagem de erro e terminará a execução.
    if (scanf("%f", &raio) != 1) {
        printf("Entrada invalida. Digite um numero\n");
        return 1;
    }

    area = PI * raio * raio;

    printf("\nA area do circulo e: %.2f\n", area);

    return 0;
}

/*
Para compilar e executar este programa:
How to compile and run this program:

1. Abra o terminal na pasta onde está este arquivo.
1. Open the terminal in the folder where this file is located.

2. Compile o programa usando:
   gcc circulo.c -o circulo
2. Compile the program using:
   gcc circulo.c -o circulo

3. Execute o programa com:
   ./circulo      (Linux/Mac)
   .\circulo      (Windows)
3. Run the program with:
   ./circulo      (Linux/Mac)
   .\circulo      (Windows)


É necessário ter um compilador C instalado, como o GCC.
A C compiler such as GCC must be installed on your system.
*/