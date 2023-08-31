#include <stdio.h>

int main(){
    float base, altura, area;

    printf("Insira a altura do triângulo: ");
    scanf("%f",&altura);

    printf("Insira a base do triângulo: ");
    scanf("%f", &base);

    area = base*altura/2;

    printf("A área do seu triângulo é %f", area);

    return 0;
}
