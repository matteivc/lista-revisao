/*
 * maior elemento de uma matriz
 */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m[100][100],i,j,menor,maior,pma,pme;
    menor=m[0][0];
    maior=m[0][0];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
           scanf("%d",&m[i][j]);
           if(m[i][j]<menor){
            menor=m[i][j];
           }
           if(m[i][j]>maior){
            maior=m[i][j];
           }
        }
    }
    printf("O menor numero e: [%d]",menor);
    printf("O maior numero e: [%d]",maior);


}