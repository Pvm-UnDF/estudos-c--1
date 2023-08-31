#include <stdio.h>

int fatorial(int numero){
    if (numero <= 1){
        return 1;
    }

    return numero * fatorial(numero-1);
}

int main(){
    int numero, fatorialResultado;

    printf("Digite o número que deseja calcular o fatorial: ");
    scanf("%d", &numero);

    fatorialResultado = fatorial(numero);
    printf("O fatorial de %d é %d", numero, fatorialResultado);
    return 0;
}
