#include <stdio.h>

int main(){
    int numero1 = 1, numero2 = 1, numero3 = 2, numero;

    printf("Diga até quanto da sequência de Fibonacci você quer ver: ");
    scanf("%d",&numero);

    while(numero1 <= numero){
        printf("%d\n", numero1);
        numero1 = numero2;
        numero2 = numero3;
        numero3 = numero1+numero2;
    }

    return 0;
}
