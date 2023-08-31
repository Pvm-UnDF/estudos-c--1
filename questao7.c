#include <stdio.h>

int main(){
    float nota;

    printf("Informe a nota da prova: ");
    scanf("%f", &nota);

    if(nota >= 6){
        printf("Você foi aprovado(a)!");
    }else{
        printf("Você foi reprovado(a)!");
    }
    return 0;
}
