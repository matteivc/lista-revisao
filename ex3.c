/*
 * identifica se o numero é um quadrado perfeito 
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int Quadrado_Perfeito (int numero, float fracao, int numero2) // Função que irá retornar se o número é,ou não é um quadrado perfeito.
{	

	fracao = sqrt (numero) ; // Função Raiz quadrada, Vou estar achando a raiz da variavel * fracao *.  
	                     
	numero2 = fracao ; // Variavel 'numero2' é auxiliar, pois vai receber o valor de 'fracao'.
	
	
	if (fracao <= numero2)
	{
		printf ("\n O numero digitado eh um numero perfeito") ;
	}
		
	else 
	{
		printf ("\n O número digitado nao eh quadrado perfeito") ;
	}
	
}


int main (void){
	int numero, numero2 ;
	float fracao ;
	
	printf ("\n Digite um numero interiro......: ") ;
	scanf ("%d", &numero) ;	
	
	// Invocando Função.
	
	Quadrado_Perfeito (numero, fracao, numero2) ;
	
	return 0 ;
	system ("pause") ;	
}