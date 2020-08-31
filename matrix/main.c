#include <stdio.h>
#include <stdlib.h>


/**
 * Faz a transposta da matriz M e põe o resultado em transposta.
 * O número de linhas é trocado pelo número de colunas e o número de colunas é trocado pelo número de linhas.
 */
void transposta(double *matriz, int linhas, int colunas, double *transposta)
{
	int i, j;
	for (i = 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			transposta[j*linhas+i] = matriz[i*colunas+j];
		}
   }
}
/**
 *
 * Realiza a operação de multiplicação de matrizes: AXB e põe o resultado na matriz resultado.
 * Retorno 0 indica erro, as matrizes devem ser compatíveis para esta operação(O número de colunas da matriz A deve ser igual ao número de linhas da Matriz B).
 * Os ponteiros para inteiros das linhas e colunas da matriz resultado atualizarão o resultado do número de linhas e colunas da nova matriz.
 * (A matriz resultado terá o número de linhas de A e o Número de Colunas de B).
 */
int multiplica(
		double *a, int linhasA, int colunasA,
		double *b, int linhasB, int colunasB,
		double *resultado, int *linhasR, int *colunasR)
{
	int i, j, k;
	if(colunasA != linhasB){
		printf("Erro na multiplicação: Matrizes incompatíveis para esta operação.\t\n");
		return 0;
	}
	*colunasR = colunasB;
	*linhasR = linhasA;
	for(i = 0; i < linhasA; i++){
		for(j = 0; j < colunasB; j++){
			resultado[i*2+j] = 0.0;
			for(k = 0; k < colunasA; k++){
				resultado[i*colunasB+j] += a[i*colunasA+k]*b[k*colunasB+j];
			}
		}
	}


	return 1;
}

void mostraMatriz(double *matriz, int linhas, int colunas){
	int i, j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("%.1f\t", matriz[i*colunas+j]);
		}
		printf("\n");
	}
}

int main(void)
{
	double a[2][3] = {1,-3, 6, 4, 5, 0};
	double b[3][2] = {2,4,-1,5,3,6};
	double resultado[2][2];
	int linhasR, colunasR;

	printf("\n-------Resultado---------------\n");
	mostraMatriz(a, 2, 3);
	printf("\n-------Resultado---------------\n");
	mostraMatriz(a, 3, 2);
	printf("\n-------Resultado---------------\n");
	multiplica(a, 2, 3, b, 3, 2, resultado, &linhasR, &colunasR);
	mostraMatriz(resultado, linhasR, colunasR);

	return 0;
}
