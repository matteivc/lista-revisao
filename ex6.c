/*
 * asteristicos com for
 */
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n;
    printf("Digite um valor: \n");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("*");
    }
    return 0;
}