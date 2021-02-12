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

    printf("Quantidade de negativos: %d / %f2 %%  \n", qtdnegativo, (float)qtdnegativo/5*100);
    printf("Quantidade de zeros: %d / %f2 %%  \n", qtdzeros, (float)qtdzeros/5*100);
    printf("Quantidade de positivos: %d / %f2 %%  \n", qtdpositivo, (float)qtdpositivo/5*100);
    return 0;
}