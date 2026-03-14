#include <stdio.h>
int main()
{
    float base, alt, area;

    printf("\nDigite a Base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &alt);

    area = (base * alt) / 2;

    printf("\nA area do trinagulo e:  %.2f\n", area);

    return 0;
}