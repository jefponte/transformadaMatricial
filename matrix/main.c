#include <stdio.h>
#include <stdlib.h>


/**
 * Faz a transposta da matriz M e p�e o resultado em transposta.
 * O n�mero de linhas � trocado pelo n�mero de colunas e o n�mero de colunas � trocado pelo n�mero de linhas.
 */
void transposta(double *matriz, int linhas, int colunas, double *transposta);

/**
 *
 * Realiza a opera��o de multiplica��o de matrizes: AXB e p�e o resultado na matriz resultado.
 * Retorno 0 indica erro, as matrizes devem ser compat�veis para esta opera��o(O n�mero de colunas da matriz A deve ser igual ao n�mero de linhas da Matriz B).
 * Os ponteiros para inteiros das linhas e colunas da matriz resultado atualizar�o o resultado do n�mero de linhas e colunas da nova matriz.
 * (A matriz resultado ter� o n�mero de linhas de A e o N�mero de Colunas de B).
 */
int multiplica(
		double *a, int linhasA, int colunasA,
		double *b, int linhasB, int colunasB,
		double *resultado, int *linhasR, int *colunasR);
/**
 * Calcula inversa de uma matriz quadrada de ordem m
 */
int inversa(double *matriz, int ordem, double *resultado);

/**
 * Percorre e exibe os valores de uma matriz.
 */
void mostraMatriz(double *matriz, int linhas, int colunas);


int main(void)
{
	double a[3][2] = {
			{2, 3},
			{0, 1},
			{-1, 4}
	};
	double b[2][3] = {
			{1, 2, 3},
			{-2, 0, 4}
	};
	double resultado[3][3];
	int linhasR, colunasR;
//
//	printf("\n-------Resultado---------------\n");
//	mostraMatriz(a, 3, 2);
//	printf("\n-------Resultado---------------\n");
//	mostraMatriz(b, 2, 3);
//	printf("\n-------Resultado---------------\n");
	multiplica(a, 3, 2, b, 2, 3, resultado, &linhasR, &colunasR);
	printf("\n-------Resultado---------------\n");
	mostraMatriz(resultado, linhasR, colunasR);

	return 0;
}



/**
 * Faz a transposta da matriz M e p�e o resultado em transposta.
 * O n�mero de linhas � trocado pelo n�mero de colunas e o n�mero de colunas � trocado pelo n�mero de linhas.
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
 * Realiza a opera��o de multiplica��o de matrizes: AXB e p�e o resultado na matriz resultado.
 * Retorno 0 indica erro, as matrizes devem ser compat�veis para esta opera��o(O n�mero de colunas da matriz A deve ser igual ao n�mero de linhas da Matriz B).
 * Os ponteiros para inteiros das linhas e colunas da matriz resultado atualizar�o o resultado do n�mero de linhas e colunas da nova matriz.
 * (A matriz resultado ter� o n�mero de linhas de A e o N�mero de Colunas de B).
 */
int multiplica(
		double *a, int linhasA, int colunasA,
		double *b, int linhasB, int colunasB,
		double *resultado, int *linhasR, int *colunasR)
{
	int i, j, k;//Vari�veis para controle de la�os.
	if(colunasA != linhasB){
		printf("Erro na multiplica��o: Matrizes incompat�veis para esta opera��o.\t\n");
		return 0;
	}
	*colunasR = colunasB;
	*linhasR = linhasA;
	for(i = 0; i < linhasA; i++){
		for(j = 0; j < colunasB; j++){
			resultado[i*colunasB+j] = 0.0;
			for(k = 0; k < colunasA; k++){
				resultado[i*(colunasB)+j] += a[i*colunasA+k]*b[k*colunasB+j];
			}
		}
	}
	return 1;
}
/**
 * Calcula inversa de uma matriz quadrada de ordem m
 */
int inversa(double *matriz, int ordem, double *resultado)
{

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
