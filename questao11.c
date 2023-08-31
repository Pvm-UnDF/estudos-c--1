#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Usando a biblioteca time para mudar a seed.

int main(){
    //Definindo a seed
    srand(time(NULL));

    int numeroAleatorio = rand()%100 + 1, tentativa = 0;

    while(tentativa != numeroAleatorio){
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);

        if(tentativa > numeroAleatorio){
            printf("O número secreto é menor!\n");
        }else if(tentativa < numeroAleatorio){
            printf("O número secreto é maior!\n");
        }else{
            printf("Você acertou o número secreto!\n");
        }
    }

    return 0;
}
