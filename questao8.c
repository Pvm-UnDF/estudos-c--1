#include <stdio.h>

int main(){
    int numero;

    printf("Digite o número: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("Seu número é positivo.");
    }else if(numero < 0){
        printf("Seu número é negativo.");
    }else{
        printf("Seu número é zero.");
    }
    return 0;
}
