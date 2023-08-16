#include <stdio.h>
int main(int argc, char const *argv[])
{
    char nome[20];
    float nota1, nota2, nota3,media;
    printf("Informe o nome do Aluno: ");
    scanf("%s", nome);
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    media=(nota1+nota2+nota3)/3;
    printf("Aluno: %s\n",nome);
    printf("Media: %.2f\n",media);
    return 0;
}
