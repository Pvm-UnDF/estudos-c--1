#include <stdio.h>

int main(){
    char nome[25];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Ola, %s. Sua idade e %d.\n", nome, idade);

    return 0;
}
