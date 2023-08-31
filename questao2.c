#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("A temperatura em fahrenheit é %f", fahrenheit);

    return 0;
}
