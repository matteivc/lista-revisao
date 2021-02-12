/*
 * lista dinamica que diz os numeros negativos, positivos e zeros
 */
#include <stdio.h>
#include <stdlib.h>

#define tamanho 5

struct tipo_fila {

	int dados[tamanho];
	int ini;
	int fim;
};

struct tipo_fila fila;

void entrar_fila() {

	int elemento;
	if (fila.fim == tamanho) {

		printf("\nFila Cheia.\n");
		system("pause");
	} else {

		printf("\nDigite o elemento para inserir na fila:");
		fflush(stdout);
		scanf("%d3", &elemento);
		fila.dados[fila.fim] = elemento;
		fila.fim++;
	}
}

int sair_fila() {

	int elemento;
	if (fila.fim == 0) {

		printf("\nFila vazia.\n");
		system("pause");
	} else {

		elemento =  fila.dados[fila.ini];
		int i;
		for (i = 0; i < tamanho; i++) {

			fila.dados[i] = fila.dados[i+1];
		}

		fila.dados[fila.fim] = 0;
		fila.fim--;
	}

	return elemento;
}

void mostrar_menu() {

	printf("\n Escolha Opcao:");
	printf("\n 1 - Incluir na Fila;");
	printf("\n 2 - Remover da Fila;");
	printf("\n 3 - Sair \n\n");
}

void mostrar_fila() {

	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {

		printf("%d, ", fila.dados[i]);

	}
	printf(" ]\n\n");
}

void mostrar_positivos() {

	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
        if (fila.dados[i]>0) printf("%d, ", fila.dados[i]);
        else printf("-, ", 0);
	}
	printf(" ]\n\n");
}
void mostrar_negativos() {

	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
        if (fila.dados[i]<0) printf("%d, ", fila.dados[i]);
        else printf("-, ", 0);
	}
	printf(" ]\n\n");
}
void mostrar_zeros() {

	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
        if (fila.dados[i]==0) printf("%d, ", fila.dados[i]);
        else printf("-, ", 0);
	}
	printf(" ]\n\n");
}
int main(void) {

	int op = 1;
	fila.ini = 0;
	fila.fim = 0;
	while (op !=0) {

		system("cls");
        printf("NUMEROS:\n");
		mostrar_fila();
        printf("NUMEROS POSITIVOS:\n");
        mostrar_positivos();
        printf("NUMEROS NEGATIVOS:\n");
        mostrar_negativos();
        printf("NUMEROS ZEROS:\n");
        mostrar_zeros();
		mostrar_menu();
		fflush(stdout);
		scanf("%d1", &op);

		switch (op) {
			case 1:

				entrar_fila();
				break;
			case 2:

				sair_fila();
				break;
		}
	}
	return EXIT_SUCCESS;
}