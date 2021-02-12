/*
 * asteristicos com while
 */
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n,i=0;
    printf("Digite um valor: \n");
    scanf("%d", &n);
    while (i<n)
    {
        printf("*");
        i++;
    }

    return 0;
}