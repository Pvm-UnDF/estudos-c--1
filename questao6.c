#include <stdio.h>

int main(){
    int ano;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if(ano%4 == 0){
        printf("Ano é bissexto");
    }else{
        printf("Ano não é bissexto");
    }
    return 0;
}
