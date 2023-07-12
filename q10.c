/* Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos. Seu programa deve usar laços de repetição e funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.

Por exemplo, para lado igual a 5:
*****
*****
*****
*****
***** */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam;
    
    do{
        printf("Qual o tamanho do lado do seu quadrado?\n(apenas tam. de 1 à 20.)\n");
        scanf("%d", &tam);

        if (tam < 1 || tam > 20){
            printf("Tamanho inválido!\n\n");
        }
    }while(tam < 1 || tam > 20);

    for(int i=1; i<=tam; i++){
        if(tam==1){
            printf("*");
            continue;
        }

        for(int j=1; j<=tam; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}