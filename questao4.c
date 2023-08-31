#include <stdio.h>

int main(){
    int numero, numeroQuadrado, numeroCubo;

    printf("Digite o número: ");
    scanf("%d", &numero);

    numeroQuadrado = numero*numero;
    numeroCubo = numeroQuadrado*numero;

    printf("O quadrado de %d é %d, e o seu cubo é %d\n", numero, numeroQuadrado, numeroCubo);
    return 0;
}
