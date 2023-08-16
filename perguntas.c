#include <stdio.h>

int main(int argc, char const argv[])
{
    char nome[20];
    int idade;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    setbuf(stdin,0);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Nome: %s, %d anos.", nome, idade);
    return 0;
}
