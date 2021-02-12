/*
 * Printa o maior de 3 entradas.
 *
 */
#include <stdio.h>

int mais(int valor1,int valor2,int valor3){
    int maiorvalor= valor1;
    if(valor2>valor1 && valor2>valor3) maiorvalor = valor2;
    else if(valor3>valor1 && valor3>valor2) maiorvalor = valor3;
    return maiorvalor;
}

int main (void) {
    int valor1,valor2,valor3;
    printf("digite 3 valores:\n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    printf("maior valor dos 3 eh : %d", mais(valor1,valor2,valor3) );
    
    return 0;
}