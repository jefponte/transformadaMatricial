/*
 ============================================================================
 Name        : Teste.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int linhas = 3;
	int identidade[linha][coluna];
	int colunas = 3;
	int Matriz_A[3][3] = {{1,2,3},{0,1,4}, {5,6,0}};
	int linha, coluna, tab;
	int pivo = 0, p = 0, m = 0, k = 0;

	printf("----------------------\n");
	printf("Matriz Digitada:\n");
	printf("----------------------\n");

	for (linha = 0; linha < linhas; linha++) {
		for (coluna = 0; coluna < colunas; coluna++) {
			printf("%d ", Matriz_A[linha][coluna]);
		}
		printf("\n");
	}

	printf("\n\n");
	printf("-----------------------------\n");
	printf("DIAGONAL PRINCIPAL\n");
	printf("-----------------------------\n");

	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (linha == coluna) {
				printf("%d ", Matriz_A[linha][coluna]);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n");
	printf("-----------------------------\n");
	printf("MATRIZ IDENTIDADE\n");
	printf("-----------------------------\n");



	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (linha == coluna) {
				identidade[linha][coluna] = 1;
			} else {
				identidade[linha][coluna] = 0;
			}
		}
	}

	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			printf("%d", identidade[linha][coluna]);
			if (coluna < 3 - 1) {
				printf("\t");
			} else {
				printf("\n");
			}
		}
	}

	printf("\n\n");
	printf("-----------------------------\n");
	printf("MATRIZ INVERSA\n");
	printf("-----------------------------\n");

	for (coluna = 0; coluna < 3; coluna++) {
		pivo = Matriz_A[coluna][coluna];
		for (k = 0; k < 3; k++) {
			Matriz_A[coluna][k] = (Matriz_A[coluna][k]) / (pivo); //L1 -> L1/pivo , L2 -> L2/pivo, L3 -> L3/pivo
			identidade[coluna][k] = (identidade[coluna][k]) / (pivo); //Ex: 1 0 0 / pivo  , 0 1 0 / pivo,   0 0 1/ pivo
		}

		for (linha = 0; linha < 3; linha++) {
			if (linha != coluna) {
				m = Matriz_A[linha][coluna];
				for (k = 0; k < 3; k++) {
					Matriz_A[linha][k] = (Matriz_A[linha][k]) - (m
							* Matriz_A[coluna][k]); //Ex: L2 -> L2 - ( 1"m" - L1)
					identidade[linha][k] = (identidade[linha][k]) - (m
							* identidade[coluna][k]);
				}
			}
		}
	}

	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			printf("%d \t", identidade[linha][coluna]);

		}

		printf("\n");
	}

	getch();
}
