#include <stdio.h>

int main(){
    int numero;

    printf("Digite o número: ");
    scanf("%d", &numero);

    if(numero%2 == 0){
        printf("O número é par");
    }else{
        printf("O número é ímpar");
    }
    return 0;
}
