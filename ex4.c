/*
 * lista dinamica que diz os numeros negativos, positivos e zeros
 */
#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

int main (void) {
    int n,vetor[tamanho], qtdpositivo=0,qtdnegativo=0,qtdzeros=0;
    for(int i=0;i<tamanho;i++){
        printf("Digite um valor: \n");
        scanf("%d", &n);
        if(n>0){
            qtdpositivo+=1;
        }
        if(n<0){
            qtdnegativo+=1;
        } 
        if(n==0){
            qtdzeros+=1;
        }
        vetor[i]= n;
    }
    printf("Quantidade de negativos: %d \n", qtdnegativo);
    printf("Quantidade de zeros: %d \n", qtdzeros);
    printf("Quantidade de positivos: %d \n", qtdpositivo);
    return 0;
}