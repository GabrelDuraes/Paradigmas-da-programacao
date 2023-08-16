#include <stdio.h>
int main(int argc, char const *argv[])
{
    float base,altura,area;
    printf("Informe a base do triangulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triangulo: ");
    scanf("%f", &altura);
    area=(base*altura)/2;
    printf("Valor da area:%.2f\n",area);
    return 0;
}
